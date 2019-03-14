#!/usr/bin/python

"""
- The object file header describes the size and position of the other pieces of
the file.
- The text segment contains the machine language code for routines in the
source file. These routines may be unexecutable because of unresolved
references.
- The data segment contains a binary representation of the data in the source
file. The data also may be incomplete because of unresolved references to
labels in other files.
- The relocation information identifies instructions and data words that
depend on absolute addresses. Th ese references must change if portions of
the program are moved in memory.
- The symbol table associates addresses with external labels in the source file
and lists unresolved references.
- The debugging information contains a concise description of the way the
program was compiled, so a debugger can find which instruction addresses
correspond to lines in a source file and print the data structures in readable
form.
"""

# proper specification of an assembler
# step 0: follow assembler directives; put .data and .text segments in proper spots
# step 1: store location lables in a table(somehow make globals availible to linker), main is global by default? (according to book), required to do this first because assemblers are defined to have forward referencing (unlike c)
# step 2: translate machine instructions into binary

# does not do backpacking or any sort of optimizations, save such things for implementation in C or something

import sys # system control
import re #regular expressions



# compiler instructions
assembler_directives_map = {
    '.globl' : '',
    '.data' : '',
    '.text' : '',
    '.macro' : '',
    '.end_macro' : '',
    '.include' : ''
}


# parses instruction into opt-code
instruction_map = {
    'lw'    : ('s/l', '0x23', '0'), 
    'sw'    : ('s/l', '0x2b', '0'), 
    'lui'   : ('lui', '0x0f', '0'), 
    'add'   : ('r', '0', '0x20'), 
    'addu'  : ('r', '0', '0x21'), 
    'sub'   : ('r', '0', '0x22'), 
    'subu'  : ('r', '0', '0x23'), 
    'addi'  : ('i', '0x08', '0'), 
    'addiu' : ('i', '0x09', '0'), 
    'and'   : ('r', '0', '0x24'), 
    'or'    : ('r', '0', '0x25'), 
    'xor'   : ('r', '0', '0x26'), 
    'nor'   : ('r', '0', '0x27'), 
    'andi'  : ('i', '0x0c', '0'), 
    'ori'   : ('i', '0x0d', '0'), 
    'sll'   : ('sft', '0', '0x00'), 
    'srl'   : ('sft', '0', '0x02'), 
    'sra'   : ('sft', '0', '0x03'), 
    'slt'   : ('r', '0', '0x2a'), 
    'slti'  : ('i', '0x0a', '0'), 
    'sltiu' : ('i', '0x0b', '0'), 
    'beq'   : ('b', '0x04', '0'), 
    'bne'   : ('b', '0x05', '0'), 
    'blez'  : ('b', '0x06', '0'), 
    'bgtz'  : ('b', '0x07', '0'), 
    'bgez'  : ('b', '0x01', '0'), 
    'j'     : ('j', '0x02', '0'), 
    'jal'   : ('j', '0x03', '0'), 
    'jr'    : ('jr', '0', '0x08'), 
    'jalr'  : ('jalr', '0', '0x09')
}

# register names
register_name_map = {
    '$0'    : 0, 
    '$zero' : 0, 
    '$1'    : 1, 
    '$at'   : 1, 
    '$2'    : 2, 
    '$v0'   : 2, 
    '$3'    : 3, 
    '$v1'   : 3, 
    '$4'    : 4, 
    '$a0'   : 4, 
    '$5'    : 5, 
    '$a1'   : 5, 
    '$6'    : 6, 
    '$a2'   : 6, 
    '$7'    : 7, 
    '$a3'   : 7, 
    '$8'    : 8, 
    '$t0'   : 8, 
    '$9'    : 9, 
    '$t1'   : 9, 
    '$10'   : 10, 
    '$t2'   : 10, 
    '$11'   : 11, 
    '$t3'   : 11, 
    '$12'   : 12, 
    '$t4'   : 12, 
    '$13'   : 13, 
    '$t5'   : 13, 
    '$14'   : 14,
    '$t6'   : 14, 
    '$15'   : 15, 
    '$t7'   : 15, 
    '$16'   : 16, 
    '$s0'   : 16, 
    '$17'   : 17, 
    '$s1'   : 17, 
    '$18'   : 18, 
    '$s2'   : 18, 
    '$19'   : 19, 
    '$s3'   : 19, 
    '$20'   : 20, 
    '$s4'   : 20, 
    '$21'   : 21, 
    '$s5'   : 21,  
    '$22'   : 22, 
    '$s6'   : 22, 
    '$23'   : 23, 
    '$s7'   : 23, 
    '$24'   : 24, 
    '$t8'   : 24, 
    '$25'   : 25, 
    '$t9'   : 25, 
    '$26'   : 26, 
    '$k0'   : 26, 
    '$27'   : 27, 
    '$k1'   : 27, 
    '$28'   : 28, 
    '$gp'   : 28, 
    '$29'   : 29, 
    '$sp'   : 29, 
    '$30'   : 30, 
    '$fp'   : 30, 
    '$31'   : 31, 
    '$ra'   : 31
}

def twoComlCodeGen(value, bits):
    """
    compute the 2's compliment of int value val
    """
    if value < 0:
        value = ( 1<<bits ) + value
    formatstring = '{:0%ib}' % bits
    return formatstring.format(value)

def main():
    # start by checking if correct args were used
    if len(sys.argv) != 3:
        print("Usage:", sys.argv[0], "<input file name> <output file name>")
        return
    
    # open the files
    input_file = open(sys.argv[1], 'r')
    output_file= open(sys.argv[2], 'w')

    # name truth value
    false = -1

    # initialize starting data
    line_num = 0
    symbol_table = {}

    # first pass, taking care of addresses, producing lexemes for each line?
    # this is how a pass in spim is done
    # the book says to count lexemes for line count, which is odd
    data = ''
    for eachline in input_file:
        # remove whitespace, newlines, carriage returns
        line = eachline.strip(' \n\r') 

        # strip comments
        if line.find('#') != false:       
            line = line[0 : line.find('#')]

        # if there is a non-redudant symbol, record it into the symbol table, remove symbol
        if (line.find(':') != false) :
            # error
            if (line[0:line.find(':')]) in lookup_label) : 
                print('error, redundant lable: ' line[0:line.find(':')] ' at' + str(line_num))
                return 
            lookup_label.update({line[0:line.find(':')] : line_num})
            line = line[line.find(':')+1:]

        # increment address
        line_num += 1
        
    line_num = 0

    currLineNum = 0
    for line in data.split('\n')[:-1]:
        if line.find(':') != -1:
            line = line[line.find(':') + 1 : ]
        parsed = re.split(r'[,\s]\s*', line)
        instFile = instMap[parsed[0]] # broken, not sure why
        machineCode = ''
        if instFile[0] == 'r':
            if instFile[1].find('0x') != -1:
                machineCode += '{:06b}'.format((int)(instFile[1], 16))
            else:
                machineCode += '{:06b}'.format((int)(instFile[1], 10))
            machineCode += '{:05b}'.format(regNameMap[parsed[2]])
            machineCode += '{:05b}'.format(regNameMap[parsed[3]])
            machineCode += '{:05b}'.format(regNameMap[parsed[1]])
            machineCode += '{:05b}'.format(0)
            machineCode += '{:06b}'.format((int)(instFile[2], 16))
        elif instFile[0] == 'sft':
            machineCode += '{:06b}'.format((int)(instFile[1], 16))
            machineCode += '{:05b}'.format(0)
            machineCode += '{:05b}'.format(regNameMap[parsed[2]])
            machineCode += '{:05b}'.format(regNameMap[parsed[1]])
            if parsed[3].find('0x') != -1:
                machineCode += '{:05b}'.format((int)(parsed[3], 16))
            else:
                machineCode += '{:05b}'.format((int)(parsed[3], 10))
            machineCode += '{:06b}'.format((int)(instFile[2], 16))
        elif instFile[0] == 'i':
            machineCode += '{:06b}'.format((int)(instFile[1], 16))
            machineCode += '{:05b}'.format(regNameMap[parsed[2]])
            machineCode += '{:05b}'.format(regNameMap[parsed[1]])
            if parsed[3].find('0x') != -1:
                machineCode += twoComlCodeGen((int)(parsed[3], 16), 16)
            else:
                machineCode += twoComlCodeGen((int)(parsed[3], 10), 16)
        elif instFile[0] == 'lui':
            machineCode += '{:06b}'.format((int)(instFile[1], 16))
            machineCode += '{:05b}'.format(0)
            machineCode += '{:05b}'.format(regNameMap[parsed[1]])
            if parsed[2].find('0x') != -1:
                machineCode += twoComlCodeGen((int)(parsed[2], 16), 16)
            else:
                machineCode += twoComlCodeGen((int)(parsed[2], 10), 16)
        elif instFile[0] == 's/l':
            machineCode += '{:06b}'.format((int)(instFile[1], 16))
            machineCode += '{:05b}'.format(regNameMap[re.findall(r'\(.*\)', parsed[2])[0][1:-1]])
            machineCode += '{:05b}'.format(regNameMap[parsed[1]])
            machineCode += twoComlCodeGen((int)(parsed[2][0 : parsed[2].find('(')], 10), 16)
        elif instFile[0] == 'jr':
            machineCode += '{:06b}'.format((int)(instFile[1], 16))
            machineCode += '{:05b}'.format(regNameMap[parsed[1]])
            machineCode += '{:015b}'.format(0)
            machineCode += '{:06b}'.format((int)(instFile[2], 16))
        elif instFile[0] == 'jalr':
            machineCode += '{:06b}'.format((int)(instFile[1], 16))
            machineCode += '{:05b}'.format(regNameMap[parsed[2]])
            machineCode += '{:05b}'.format(0)
            machineCode += '{:05b}'.format(regNameMap[parsed[1]])
            machineCode += '{:05b}'.format(0)
            machineCode += '{:06b}'.format((int)(instFile[2], 16))
        elif instFile[0] == 'b':
            machineCode += '{:06b}'.format((int)(instFile[1], 16))
            machineCode += '{:05b}'.format(regNameMap[parsed[1]])
            machineCode += '{:05b}'.format(regNameMap[parsed[2]])
            machineCode += twoComlCodeGen(lookupLabel[parsed[3]] - (currLineNum + 1), 16)
        else:
            machineCode += '{:06b}'.format((int)(instFile[1], 16))
            machineCode += twoComlCodeGen(lookupLabel[parsed[1]], 26)
        output_file.write('{:08x}'.format((int)(machineCode, 2)) + '\n')
        currLineNum += 1

    input_file.close()
    output_file.close()


if __name__ == '__main__':
    main()
