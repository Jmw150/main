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

# Does not do backpacking or any sort of optimizations. Save such things for implementation in C or something.

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

"""
    # I hate this guy ...
    # may just dump this section and start over
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
"""

    input_file.close()
    output_file.close()


if __name__ == '__main__':
    main()
