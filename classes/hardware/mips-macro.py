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
    macro_table = {}

    # first pass, store and expand macros
    # if there is a non-redudant macro, record it into the macro table, blank .macro and .end_macro
    data = ''
    for eachline in input_file:
        if (line.find('.macro') != false) :
            # check if this macro was recorded already
            if (line[0:line.find(':')]) in macro_table) :  # does not work
                print('error, redundant lable: ', line[0:line.find(':')], ' at' + str(line_num))
                return 
            lookup_label.update({line[0:line.find(':')] : line_num})
            #line = line[line.find(':')+1:]

        # increment address
        line_num += 1
        


    input_file.close()
    output_file.close()


if __name__ == '__main__':
    main()
