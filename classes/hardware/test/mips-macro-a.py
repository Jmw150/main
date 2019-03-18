#!/usr/bin/python3

"""
macro assembler part a (part a meaning specifically the parts not
implemented by spim but are still defined in the book "computer
implementation and design")

a program to implement .macro, .end_macro defintions (optionally
.include) 

technique: micro pass compiler
"""

import sys # system control
import re #regular expressions


# start by checking if correct args were used
def check_args() :
    if len(sys.argv) != 3:
        print("Usage:", sys.argv[0], 
              "<input file name> <output file name>")
        exit()
    
# open the files
#input_file = open(sys.argv[1], 'r')
#output_file= open(sys.argv[2], 'w')

input_file = open('function.asm', 'r')
output_file= open('lol', 'w')

# name truth values
false = -1 # return of ''.find() on failure
true = 1   # arbitrary

# initialize table
macro_table = {}
copy_phase = false
expand_phase = false
for line in input_file:
    oldline = line # oldline to be written to file
    # ignore commented code
    if (line.find('#') != false) :
        line = line[0:line.find('#')]
        print(line) # debug
    # get names and arguments
    if (line.find('.macro ') != false) :
        # make new names an error (in spec?)
        #if (line in macro_table) : 
        #    print('error, redundant lable: ', 
        #          line[0:line.find(':')], 
        #          ' at' + str(line_num))
        #    exit()
        copy_phase = true
        macro_table.update({line[line.find('.macro '):] : ''})
        # later stages do not have .macro, so keep them out
        oldline = '#' + line 
    elif (copy_phase == true) :
        macro_table[line.find('.macro ')].append(line)
    



    # record and comment unique symbols
    elif (line.find('.macro') != false) :
        print('#' + line)
        # error
            

        
print(macro_table)

input_file.close()
output_file.close()


#if __name__ == '__main__':
#    main()
