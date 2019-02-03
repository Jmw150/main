I. Introduction

	1. Assembly language is 1 step above the binary that runs your hardware.
	The assembler converts your code into binary. We will be programming
	the ARM microprocessor in this tutorial. This code will only work
	with an ARM based chip, but by learning assembly on a low cost computer
	you'll be able to easily learn how to use assembly in general. The only
	difference is the mnemonics used. Also ARM chips are not only used 
	with Raspberry PI, but also by most mobile devices.
	
	2. Microprocessors manipulate data and this means you'll use the
	ADD and SUB codes for adding and subtracting. Like these most codes 
	are 3 letters long. MOV is another code. 
	
	3. Another reason why learning assembler on an ARM chip is a good idea
	is because the R in ARM stands for Reduced Instruction Set Computing. That
	means that there is a limited number of instructions or codes like ADD to
	remember. 

II. Setup

	1. Install Vim : sudo apt-get install vim
	
	2. Create a working directory : mkdir ASM\ Projects
	
	3. If you get the error No Space on Device message : sudo raspi-config
	expand_rootfs and then reboot
	
	4. Create the source file asmtut1.s : vim asmtut1.s
	
	5. Vim Commands 
	
		a. i : insert mode 
		
		b. <ESC> : enter command mode
			i. w : Save / Don't Exit
			ii. wq : Save / Quit
			iii. Q! : Quit / Discard Changes
			iv. w : Move to front of next word
			v. b : Move backwards to front of word
			vi. 0 : Move to start of line
			vii. $ : Move to end of line
			
		c. Move around with arrows
		
		d. :set number : Displays line numbers
		
		e. More commands will be covered as needed
		
	6. First program
	@ I'm a comment
	/* I'm a multiline comment */
	@ Define where your instructions start, but this isn't needed
	.text 
	
	@ Defines _start as a global available to the whole program
	.global _start
	
	@ Define starting point and that it is a label with :
	_start:
	
	@ Move the value 65 into register 0
	MOV R0, #65
	
	@ Move the value 1 into register 7
	MOV R7, #1
	
	@ End the program and return to the terminal
	SWI 0
	
		a. SWI stands for SoftWare Interrupt. If R7 has a value of 1 in it SWI knows to exit to the terminal. The value stored in R7 is the Syscall number. Depending on how different registers are set we can call for other Raspbian routines or libraries to be called. 
		
	7. Compile Code
		a. as -o asmtut.o asmtut.s
			1. Create an object file
			
		b. ld -o asmtut asmtut.o
			1. Make an executable file by linking files together
		
		c. Execute with ./asmtut ; echo $?
		
	8. If you type echo $? in the terminal the value stored in R0 is returned
	
	9. Second Program
	@ asmtut2.s
	.global _start
	_start:
	MOV R0, #65
	
	@ Branch to _part2 in the next part of the program
	BAL _part2
	
	@ asmtut3.s
	.global _part2
	_part2:
	MOV R7, #1
	SWI 0
	
		a. Compile program
		
			1. as -o asmtut2.o asmtut2.s
			
			2. as -o asmtut3.o asmtut3.s
			
			3. ld -o asmtut4.o asmtut2.o asmtut3.o
			
			4. ./asmtut4 ; echo $?
			
	10. We'll create a makefile to make it easier to compile. A makefile contains the following rules
	
		a. target: prerequisite
		   <TAB>   recipe
		   
		b. Target is the name of the file to generate
		
		c. The prerequisite is a file needed to create target. If the prerequisite doesn't exist we look for its creation in the targets that follow
		
		d. The recipe is an action that make executes
		
		e. Add the following to execute clean up with (make clean)
		clean:
			rm *.o asmtut
		
		f. asmtut: asmtut.o
				ld -o asmtut asmtut.o
		   asmtut.o asmtut.s
		   		as -o asmtut.o asmtut.s
		   clean:
				rm *.o asmtut
			
III. Registers, Bits, Bytes and Words (Slide)

	1. A bit is either a 1 or a 0

	2. The ARM CPU is a 32 bit CPU. A byte has 8 bits. 4 bytes or 32 bits are called words with this ARM CPU because 32 bits is the unit of data used by the Raspberry PI.
	
	3. Data is stored in memory in words, but you also have access to the bytes. 
	
	4. The CPU has 16 registers that can hold a word of data each. Registers 0 - 12 are always available. 
	
	5. Register 13 is a pointer to the active stack. You put your data on the stack and the stack pointer tells you how high that stack of data is. (More on this later)
	
	6. Register 14 is the Link Register. When an instruction calls a subroutine the LR is set to the subroutine return address. (More on this later)

	7. Register 15 is the program counter. It stores the address of the next instruction to execute. It keeps track of where your program is in its execution of your code. (More on this later)
	
	8. There is also the Current Program Status Register. It stores info on your program and results of instructions it has executed. (More on this later)
			
IV. Binary Numbers (Slide)

	1. Binary numbers contain only 1s and 0s which combine to make
	base 10 numbers we use. 
	
	2. In Base 10 123 = 1 : 100, 2 : 10s, 3 : 1s
	
	3. In Binary 111 = 1 : 4, 1 : 2, 1 : 1 = 7 in Base 10
	
	4. From right to left the digits double 64, 32, 16, 8, 4, 2, 1
	
	5. Decimal to Binary : If subtraction is possible add a 1 and if not don't
	
		a. 126 - 64 = 62 : 1
		b. 62 - 32 = 30 : 1
		c. 30 - 16 = 14 : 1
		d. 14 - 8 = 6 : 1
		e. 6 - 4 = 2 : 1
		f. 2 - 2 = 0 : 1
		g. 0 - 1 = NA : 0
		h. 126 to binary is 1111110
		
V. Hexadecimal Numbers (Base 16) (Slide)

	1. It is easier to represent binary numbers as hex numbers.
	
	2. Hex numbers contain the numbers 0 - 9 and A, B, C, D, E, F for numbers
	10 - 15
	
	3. 	We can represent 4 bits of a binary number with 1 hex
	
		D	H		B
		0   0		0000
		1	1		0001
		2	2		0010
		3	3		0011
		4	4		0100
		5	5		0101
		6	6		0110
		7	7		0111
		8	8		1000
		9	9		1001
		10	A		1010
		11	B		1011
		12	C		1100
		13	D		1101
		14	E		1110
		15	F		1111
		
	4. Convert Binary to Hex
	
		a. Convert a byte in 2 into 2 nibbles
		
		b. 10101010 becomes 1010 1010 or AA
		
	5. Convert Hex to Decimal
	
		a. 0x2A7 = 
		b. 2 * 16^2 = 512
		c. 10 * 16 = 160
		d. 7 * 1 = 7
		e. 512 + 160 + 7 = 679
		
	6. Convert Decimal to Hex
	
		a. 679 / 256 (16^2) = 2.65 (Throw away the remainder)
		b. (679 - 512) 167 / 16 = 10.43 or A (Throw away the remainder)
		c. 7 is left and so 679 = 2A7
		
VI. Adding and Subtracting Binaries
		
	1. Adding Binaries
	
		a. 0 + 0 = 0
		b. 1 + 0 = 1
		c. 0 + 1 = 1
		d. 1 + 1 = 0 (Carry the 1)
		
		e. 0101	: 5
		 + 0011 : 3
		   1000 : 8
		   
	2. Subtracting Binaries
	
		a. When subtracting you borrow 1 from the left to make
		a 0 into a 10 (In Binary) or 2 and then subtract 1 from
		
		b. You can't borrow from a 0 so when that happens you
		keep moving left until you get a 1 to borrow from. 
	
	
	3. Twos Complement Numbers
	
		a. To convert a number to its negative form flip each bit
		and then add 1 to it.
		
		b. 7 = 00111 and -7 = 11001
		
		c. You can now add versus subtract binaries which some people find easier
		
			1. 11000 : 24
			 - 00111 :  7
			 
			   11000 : 24
			 + 11001 : -7
			   10001 : 17
			   
			2. Through out the last carry bit to get the correct answer
			
VII. Input and Output

	1. To output to the screen we need to set the parameters as such
	
		a. R0 : Output Stream (1 : Monitor)
		
		b. R1 : Address of characters to write
		
		c. R2 : Number of characters to write
		
		d. R7 : Syscall (4 to write to screen)
		
	2. @ Hello World
	.global _start
	_start:
		MOV R7, #4 @ Syscall to output to screen
		MOV R0,  #1 @ Monitor output stream
		MOV R2, #12 @ String Length
		LDR R1, =message @ Load register with address of string
		SWI 0
		
	end:
		MOV R7, #1 @ Exit syscall
		SWI 0
		
	.data @ Signify that what follows is data
	message:
		.ascii "Hello World\n"
		
	3. To output we need to set parameters as well
	
		a. R0 : Input Stream (0 : Keyboard)
		
		b. R1 : Address of buffer to save string to
		
		c. R2 : # of characters to read
		
		d. R7 : Syscall (3 to read from keyboard)
		
	4. @ Read data
	.global _start
	_start:
		MOV R7, #3 @ Syscall read from keyboard
		MOV R0,  #0 @ Input stream keyboard
		MOV R2, #10 @ Read 10 characters
		LDR R1, =message @ Put string in message
		SWI 0
		
	_write:
		MOV R7, #4 @ Syscall to output to screen
		MOV R0, #1 @ Output to monitor
		MOV R2, #5	@ # of characters to write
		LDR R1, =message @ Print string in message
		SWI 0
		
	end:
		MOV R7, #1
		SWI 0
		
	.data
	message:
		.ascii " "
	
VIII. ADD
	
	1. Most instructions follow this order 
	<Instruction> <Dest>, <Operand>, <Operand>
		
		a. Instruction Name - 3 or 4 character mnemonic
		
		b. Destination Register
		
		c. Register to manipulate
		
		d. A Register or Value to manipulate
		
	2. ADD value in register 1 plus register 2 and store in register 0
	ADD R0, R1, R2
	
	3. ADD value in register 1 plus number 1 and store in register 0
	ADD R0, R1, #1
	
	4. Add 2 values and output the result
	.global _start
	_start:
	MOV R1, #0xA @ Put 10 in R1
	ADD R0, R1, #0x14 @ Add 10 + 20, store in R0
	MOV R7, #1 @ Exit with a system call
	SWI 0 @ End program and return to terminal
	
	5. make
	./asmtut4 ; echo $?
	   
	6. The SWI instruction interacts with the operating system. Linux provides
	many services and we select the one we want by putting a value in R7. If the program returns a value that value is returned in R0. 
	
IX. SUB
	
	1. We can subtract values
	.global _start
	_start:
	MOV R1, #0x14 @ Put 20 in R1
	SUB R0, R1, #0xA @ Subtract 20 - 10, store in R0
	MOV R7, #1 @ Exit with a system call
	SWI 0 @ End program and return to terminal
	
		a. Gives a result of 10
		
X. MUL & MLA

	1. Multiply values (Must store values in Registers)
	.global _start
	_start:
	MOV R1, #0x14 @ Put 20 in R1
	MOV R2, #0xA @ Put 10 in R2
	MUL R0, R1, #0xA @ Multiply 20 * 10, store in R0
	MOV R7, #1 @ Exit with a system call
	SWI 0 @ End program and return to terminal
	
	2. MLA (Multiply with Accumulate) Multiplies the first 2 register values and then adds that to the last register value
	.global _start
	_start:
	MOV R1, #0x14 @ Put 20 in R1
	MOV R2, #0xA @ Put 10 in R2
	MOV R3, #0x5 @ Put 5 in R3
	MLA R0, R1, R2, R3 @ (R1 * R2) + R3, store in R0
	MOV R7, #1 @ Exit with a system call
	SWI 0 @ End program and return to terminal
	
	3. VIM Copy / Cut and Paste Line
	
		a. Put the cursor on the line to copy
		
		b. Press V to select line
		
		c. Press d to cut or y to copy
		
		d. Move to place to paste
		
		e. P to paste before cursor, or p to paste after
		
		f. u undoes previous actions
		
		g. Ctrl - R Redoes undone action
		
XI. Branching & CPSR & CMP

	1. Branch instructions allow us to execute different instructions depending upon conditions. 
	
	2. Register 15 is the program counter and it stores the address of the next instruction to execute. After an instruction executes the PC is incremented by 4 bytes because each instruction is allocated 4 bytes. We can however change how much the PC increments by and execute instructions out of order. This is known as branching. 
	
	3. Branch to a label
	.global _start
	_start:
		MOV R0, #0x14 @ Put 20 in R0
		b other @ Jump to the other label
		MOV R0, #0xB @ Put 11 in R0
	other:
		MOV R7, #1 @ Exit with a system call
		SWI 0 @ End program and return to terminal
		
	4. I mentioned the Current Program Status Register before. It stores info about your program, such as operation results. A bit is set with a 1 if conditions have occurred such as : 
	
		a. Negative Flag : Is the number negative
		
			1. BPL negclear @ Move to label negclear if result is 0
			2. BMI negset @ Move to label negset if result is set
		
		b. Zero Flag : Set if the result is 0
		
			1. BEQ zeroset @ Move if 0 set
			2. BNE zeroclear @ Move if zero flag is 0
		
		c. Carry Flag : Set if there is a carry bit
		
			1. BCS carryset @ Move if carry set
			2. BCC carryclear @ Move if carry is 0
		
		d. Overflow Flag : Set if the result overflowed into the 31st bit, which is used to signify the sign of the value
		
			1. BVS overflowset @ Move if overflow set
			2. BVC overflowclear @ Move if overflow 0
		
	5. We can compare values using CMP like this : CMP R1, R2
	
		a. Values are compared by subtracting R1 - R2. When executed we can check the CPSR flags and can conditionally execute using branching like this :
		
			1. If R2 > R1 then the Negative Flag would be enabled because the result is negative
			
			2. If R2 < R1 then the Negative Flag wouldn't be set
			
			3. If R2 == R1 then the Zero Flag would be enabled
			
		b.  
		.global _start
		_start:
			MOV R1, #5
			MOV R2, #10
			CMP R1, R2 @ Compare values setting flags
			BEQ vals_equal @ If equal jump to vals_equal (Zero Flag Set)
			BGT r1_gt @ If R1 is greater jump to r1_gt (Negative Flag Set)
			
		@ Come here next by default
		r1_lt:
			MOV R0, #2
			B end
			
		r1_gt:
			MOV R0, #3
			B end
			
		vals_equal:
			MOV R0, #1
			
		end:
			MOV R7, #1 
			SWI 0
			
			1. You can also check for
			
				a. BNE : !=
				
				b. BGE : >=
				
				c. BLE : <=

/////////////////////////////////////////////

XII. Logical Operators

	1. Logical operators follow this format where Operand 1 must be a register and Operand 2 can be a register or a number
	Instruction <Destination>, <Operand 1>, <Operand 2>
	
	2. :%d Selects and deletes all in Vim
	
	3. AND returns 0 except when both bits are 1
	
		a. @ AND Example
		.global _start
		_start:
			MOV R1, #5 @ 0101 
			MOV R2, #9 @ 1001
			AND R0, R1, R2 @ Result is 0001 or 1
			
		end:
			MOV R7, #1 
			SWI 0
	
	4. ORR returns 1 except when both bits are 0
	
		a. @ ORR Example
		.global _start
		_start:
			MOV R1, #5 @ 0101 
			MOV R2, #9 @ 1001
			ORR R0, R1, R2 @ Result is 1101 or 13
			
		end:
			MOV R7, #1 
			SWI 0
	
	5. EOR returns 0 except when bits are opposite (1 1 and 1 0)
		
		a. @ EOR Example
		.global _start
		_start:
			MOV R1, #5 @ 0101 
			MOV R2, #9 @ 1001
			EOR R0, R1, R2 @ Result is 1100 or 12
			
		end:
			MOV R7, #1 
			SWI 0
		
	6. BIC returns 0 except when the top bit is 1 and the bottom 0
		
		a. @ BIC Example
		.global _start
		_start:
			MOV R1, #5 @ 0101 
			MOV R2, #9 @ 1001
			BIC R0, R1, R2 @ Result is 0100 or 4
			
		end:
			MOV R7, #1 
			SWI 0
			
		b. @ Convert to uppercase with BIC
		.global _start
		_start:
			MOV R7, #3 @ Syscall read from keyboard
			MOV R0,  #0 @ Input stream keyboard
			MOV R2, #1 @ Read 1 character
			LDR R1, =character @ Put character in character
			SWI 0
			
		_uppercase:
			LDR R1, =character @ Get address to character
			LDR R0, [R1] @ Load character into R0
			
			@ Zero out 6th bit
			@ a : 0110 0001
			@   : 0010 0000
			@ A : 0100 0001
			BIC R0, R0, #32 
			
			STR R0, [R1] @ Store character with address stored in R1 in R0
		
		_write:
			MOV R7, #4 @ Syscall to output to screen
			MOV R0, #1 @ Output to monitor
			MOV R2, #1	@ # of characters to write
			LDR R1, =character @ Print character in character
			SWI 0
		
		end:
			MOV R7, #1
			SWI 0
		
		.data
		character:
			.ascii " "
		
	7. TST (TeSt biTs) proforms an AND on bits and updates the Zero Flag CPSR
	
		a. .global _start
		_start:
			MOV R1, #9 @ 1001
			MOV R2, #8 @ 1000
			TST R1, R2 @ Compare values setting flags
			BEQ _bit_set @ If set jump to bit_set (Zero Flag Set)
			MOV R0, #1 @ Set output to false
			B end @ Jump to end
			
		_bit_set:
			MOV R0, #0 @ Set output to true
			
		end:
			MOV R7, #1 
			SWI 0
			
	8. TEQ (Test EQuivalence) proforms an EOR on bits and updates the Zero Flag CPSR
	
XIII. Looping

	1. Normally looping would look like this
	
		a. Loop to 10
		r0 = 0
		r1 = 1
		while(r0 <= 10):
			r0 = r0 + r1
		   
	2. @ Assembly looping to increment to 10		
	.global _start
	_start:
		MOV R0, #0
		MOV R1, #1
		B _continue_loop
		
	_loop:
		ADD R0, R0, R1
		
	_continue_loop:
		CMP R0, #9
		BLE _loop
		
	end:
		MOV R7, #1 
		SWI 0

XIX. Conditional Codes

	1. You can define is an instruction is executed based on conditions. You do this by ending an instruction with 1 of many 2 character codes.
	
	2. We already saw these codes in action when branching.
		
	3. Here are the codes
	EQ : Z Set
	NE : Z Not Set
	CS : Carry Set
	CC : Carry Not Set
	MI : Negative Set
	PL : Negative Not Set
	VS : Overflow Set
	VC : Overflow Not Set
	HI : Carry & !Zero
	LS : !Carry & Zero
	GE : Negative == Overflow
	LT : Negative != Overflow
	GT : !Zero && Negative = Overflow
	LE : Zero || Negative != V
	
	4. Increment r0 until == to r1
	
		a. Python
		r0 = 50
		r1 = 2
		while(r0 > r1):
    		r0 -= 2
    		
    	b. @ Assembly
    	.global _start
		_start:
    		MOV R0, 50
    		MOV R1, 2
    		B _loop
    		
    	_decrement:
    		SUBGT R0, R0, R1 @ If R0 is Greater Then R1 subtract 2
    		
    	_loop:
    		CMP R0, R1 @ Compare R0 to R1
    		BNE _decrement @ If Not Equal jump to decrement
    		
    	end:
		MOV R7, #1 
		SWI 0
		
XX. Barrel Shifter

	1. We can move bits left and right which makes for quick ways to multiply and divide.
	
	2. LSL : Logical Shift Left shifts all bits left and moves the highest bit into the Carry Flag (Multiplies Original Value by 2)
	
		a. .global _start
		_start:
    		MOV R1, #15 @ 1111
    		MOV R0, R1, LSL #1 @ Shift value in R1 1 bit left and save to R0
    		
    	end:
		MOV R7, #1 
		SWI 0
		
	3. LSR : Logical Shift Right shifts all bits right and moves the lowest bit into the Carry Flag (Divides Original Value by 2)
	
		a. .global _start
		_start:
    		MOV R1, #15 @ 1111
    		MOV R0, R1, LSR #1 @ Shift value in R1 1 bit right and save to R0
    		
    	end:
		MOV R7, #1 
		SWI 0
		
XXI. Memory Storage

	1. We have been storing data in registers for the most part, but now we will store it in memory. We store data by referring to that datas address in memory.
	
	2. We can store an address in a register and then use that register to load or store data. The labels we have used are addresses that refer to code, but we can also use them to refer to data.
	
	3. @ Create 2 4 byte variables and give them values of 15 and 30
	.data 		
	.balign 4 @ Request 4 bytes in the address
	fifteen: @ Define storage for fifteen
		.word 15 @ Assign value to fifteen
		
	.balign 4 @ Request 4 bytes in the address
	thirty: @ Define storage for thirty
		.word 30 @ Assign value to thirty
	
	.text
	.global _start
	_start:
    	LDR R1, addr_fifteen @ Load address
    	LDR R1, [R1] @ Load data using address
    	LDR R2, addr_thirty @ Load address
    	LDR R2, [R2] @ Load data using address
    	ADD R0, R1, R2
    	
	end:
		MOV R7, #1 
		SWI 0
    	
	@ Labels for addresses in the data section
	addr_fifteen : .word fifteen
	addr_thirty : .word thirty
	
	4. @ Load values by referring to the addresses using STR
	.data 		
	.balign 4 @ Request 4 bytes in the address
	fifteen: @ Define storage for fifteen
		.word 0 @ Assign value to fifteen
		
	.balign 4 @ Request 4 bytes in the address
	thirty: @ Define storage for thirty
		.word 0 @ Assign value to thirty
	
	.text
	.global _start
	_start:
    	LDR R1, addr_fifteen @ Load address
    	MOV R3, #15 @ Put 15 in R3
    	STR R3, [R1] @ Put value in R3 at the address in R1
    	LDR R2, addr_thirty @ Load address
    	MOV R3, #30 @ Put 30 in R3
    	STR R3, [R2] @ Put value in R3 at the address in R2
    	
    	@ Redo last program
    	LDR R1, addr_fifteen @ Load address
    	LDR R1, [R1] @ Load data using address
    	LDR R2, addr_thirty @ Load address
    	LDR R2, [R2] @ Load data using address
    	ADD R0, R1, R2
    	
	end:
		MOV R7, #1 
		SWI 0
    	
	@ Labels for addresses in the data section
	addr_fifteen : .word fifteen
	addr_thirty : .word thirty
	
XXII. Debugging

	1. The debugging tool GDB will be extremely useful with Assembler. If a program crashes it will be helpful to know where the problem occurs if the standard error messages aren't helping. 
	
	2. @ Use this code in this example
	.global _start
	_start:
		MOV R0, #0
		MOV R1, #1
		B _continue_loop
		
	_loop:
		ADD R0, R0, R1
		
	_continue_loop:
		CMP R0, #9
		BLE _loop
		
	end:
		MOV R7, #1 
		SWI 0
	
	3. When compiling your program if you want to debug add the -g option like this : 
	
		a. as -g -o asmtut.o asmtut.s
		
		b. ld -o asmtut asmtut.o
		
		c. You then start GDB with : gdb asmtut
		
	4. list displays the 1st 10 lines of your code with line numbers
	
	5. You can disassemble your code. To disassemble the code attacjed to the label _start type : disassemble _start
	
		a. The 1st number is the location in memory for the instruction. The 2nd is the number of bytes from the beginning of the label or function.
	
	6. By using breakpoints you can step through your code one line at a time and see how register and flag values change. 
	
		a. b 13 : Sets a breakpoint at line 13
		
		b. delete 13 : Deletes the breakpoint
	
		c. run : Run the program up to line 13
		
		d. info r : Return the current register values
		
			1. SP (Stack Pointer): Points to the stack in memory
			
			2. PC (Program Counter): Stores the next instruction to execute
		
		e. continue : Runs the code again till the next breakpoint
		
			1. Type continue many times to watch the register values increment
			
			2. Notice that the CPSR is set to 80000010, which means the Negative flag is set because of CMP R0, #9. The top flags are 1000 or 8 
			
		f. Type quit to exit the gdb
			
	7. Change make file for easy debugging by adding
	debug:
		as -g -o asmtut.o asmtut.s
		ld -o asmtut asmtut.o
		gdb asmtut
		
XXIII. Memory Storage

	1. Registers need to be clear so we can perform operations so we will store data in memory. To do so we must keep track of where we store data in memory.
	
	2. We can use the directive ADR to load a 32 bit address by passing it a label.
	
		a. 
		.global _start
		_start:
			ADR R0, info @ Load the address for the data in R0
			
		end:
			MOV R7, #1
			SWI 0
			
		@ Data ADR accesses must be in the .text area
		info:
			.word 10
			
		b. make debug
		
		c. b 6
		info r
		
		d. You'll see that R0 points at the address for the label
		
		e. Type x/4w _start to examine 4 Words of data starting at the address for _start and you'll see your 10
			
	3. We read data using LDR and write it using STR. You hold the address in a register.
	
		a. LDR R3, =info @ Store the address for info in R3
	
		b. LDR R2, [R3] @ Load data from the address stored in R3
		
		c. STR R4, [R3] @ Store data in R4 in the address stored in R3
		
	4. .global _start
		_start:
			LDR R3, =info @ Load the address for the data in R3
			LDR R0, [R3] @ Get the value assigned to the address
			
		end:
			MOV R7, #1
			SWI 0
			
		@ Data ADR accesses must be in the .text area
		info:
			.word 10
			
	5. We have to request enough space to allow for changes in values or you'll get a segmentation fault
	.data
	.balign 4 @ Request 4 bytes in the address
	info: @ Define storage for thirty
		.word 10 @ Assign value to thirty 
		
	.text
	.global _start
		_start:
			LDR R3, =info @ Load the address for the data in R3
			MOV R4, 100 @ Store 100 in R4
			STR R4, [R3] @ Move 100 into the addressed space in memory
			LDR R0, [R3]
			
		end:
			MOV R7, #1
			SWI 0
			
	6. We can retrieve the next piece of data in a list by adding or subtracting a value from the target address.
	
	7. With Pre-Indexed Addressing you provide the base address and the offset to the next value. 
	
		a. LDR R2, [R3, #4] puts the 4 byte value that follows the address assigned to R3 is stored in R2. 
		
		b. You can also subtract like this LDR R2, [R3, #-4].
		
		c. LDR R2, [R3, R4, LSR#4] : Shifts the value in R3 right by 2 bits and then is added to R3. 4 is used to jump you 4 bytes in to the data. 

	8. Demonstrate getting different items in the list
	.data
	primes:
	  .word 2
	  .word 3
	  .word 5
	  .word 7
	  
	.text 
	.global _start
		_start:
			LDR R3, =primes @ Load the address for the data in R3
			@ LDR R0, [R3] @ Get the value assigned to the address
			@ LDR R0, [R3, #4] @ Get the next item in the list
			LDR R0, [R3, #8] @ And the next item
			
		end:
			MOV R7, #1
			SWI 0
			
	9. Read and write bytes with LDRB
	.global _start
    _start:
    	LDR R3, =numbers @ get address
    	@ LDRB R0, [R3] @ Load the first byte or number
    	@ LDRB R0, [R3, #1] @ Get next byte
    	LDRB R0, [R3, #2] @ Get next byte
    		
    end:
		MOV R7, #1
		SWI 0
		
	.data
	numbers:
		.byte 1, 2, 3, 4, 5
		
		a. You can also use half words with .hword and ldrh
		
	10. You can load multiple words in registers with a block transfer
	
	11.
	.global _start
	_start:
		ADR R3, numbers @ Get the address
		LDMIA R3, {R5-R8} @ Store 4 values starting at the address
		MOV R0, R6
		
	end:
		MOV R7, #1
		SWI 0
	.align 2 @ Enforce 2 byte alignment (Must be multiples of 2)
	numbers:
		.word 1, 2, 3, 4


//////////////////////////////////

XXV. The Stack (Slide)

	1. With a stack you are literally stacking data on top of other data. Think of a stack of paper. When you want to retrieve data you would take off the last page you put on top. This is called Last In First Out (LIFO).
	
	2. A stack is implemented by keeping track of 2 pointers. 
	
		a. Base Pointer : Place in memory where the stack begins
		
		b. Stack Pointer : Memory location of the top of the stack. 
		
	3. The addresses assigned to data either ascend or descend in value. If it ascends we have to increase the value of the Stack Pointer. If it descends we have to decrease. We will increase / decrease the stack pointer address as we move through the stack.
	
	4.
	.global _start
	_start:
	  	MOV R1, #1
	  	MOV R2, #2
	  	
	  	@ Store 1 in stack pointer, move 4 bytes
	  	@ The ! (Write-Back) updates the register so it can be used 
		@ for another push onto the stack for example
		STR R1, [sp, #-4]!
		STR R2, [sp, #-4]!
		
		@ Remove the value and ascend towards the beginning of the stack
		LDR R0, [sp], #+4
		LDR R0, [sp], #+4
		
	end:
		MOV R7, #1
		SWI 0	
	
	5. We can use STM (Store Multiple) to push data onto the stack and LDM (Load Multiple) to pull data off. 
	
	6. There are 4 types of stacks depending on if the address the Stack Pointer points to has a value or not (Full or Empty). And, whether addresses ascend or descend (Ascending / Descending).
	
	7. (Slide) STM and LDM is postfixed with 2 character codes depending on the type of stack. 
	
		a. LDMIA / STMIA : Increment After
		
		b. LDMIB / STMIB : Increment Before
		
		c. LDMDA / STMDA : Decrement After
		
		d. LDMDB / STMDB : Decrement Before	
		
		e. When used to push and then pull you want to use the opposite code for LDM and STM. Ex. If you use STMDB to push, then use LDMIA to pull.
	
	8. 
	.global _start
		_start:
			MOV R4, #1
			MOV R5, #2
			
			@ We can refer to the Stack Pointer as SP
			@ Decrease SP by 8 bytes and save R4 & R5 in those 8 bytes
			@ The ! (Write-Back) updates the register so it can be used 
			@ for another push onto the stack for example
			STMDB SP!, {R4, R5}
			MOV R4, #3
			MOV R5, #4
			ADD R0, R4, #0
			ADD R0, R0, R5
			
			@ Remove the 8 bytes of data and then increment SP by 8 bytes
			LDMIA SP!, {R4, R5}
			ADD R0, R0, R4
			ADD R0, R0, R5
			
		end:
			MOV R7, #1
			SWI 0
			
	9. The .equ directive allows you to assign a value to a name
	
		a. 
		.global _start
		_start:
			MOV R0, #two
			
		end:
			MOV R7, #1
			SWI 0
		
		.data
		.equ two, 2
	
XXVI. LIBC

	1. We can convert C into machine code and we can use functions in the libc library in are assembler code. This provides a ton of prebuilt functions for you to use. 
	
	2. You can pass parameters to them using R0, R1, R2, and R3. To pass more you will use the stack. Your function can modify any of these registers. You can modify other registers, but their values must be restored upon exiting the function. You can also modify the stack pointer (R13), but must restore its entry value upon exiting (Avoid if possible). The Link Register (R14) cannot be changed.
	
	3. @ Hello World example using printf
	.data
	.balign 4
	question: .asciz "What is your favorite number? "
	
	.balign 4
	message: .asciz "%d is a great number\n"
	
	.balign 4
	pattern: .asciz "%d"
	
	.balign 4
	number: .word 0
	
	.balign 4
	lr_bu: .word 0
	
	.text
	
	@ Used by the compiler to tell libc where main is located
	.global main
	.func main
	
	main:
		@ Store Link Register
		LDR R1, addr_lr_bu
		STR lr, [R1]
		
		@ Load and print question
		LDR R0, addr_question
		BL printf
		
		@ Define pattern for scanf and where to store name
		LDR R0, addr_pattern
		LDR R1, addr_number
		BL scanf
		
		@ Print the message with the imbedded name
		LDR R0, addr_message
		LDR R1, addr_number
		LDR R1, [R1]
		BL printf
		
		@ Restore link register
		LDR lr, addr_lr_bu
		LDR lr, [lr]
		BX lr @ Return from main
		
	@ Define addresses
	addr_question: .word question
	addr_message: .word message
	addr_pattern: .word pattern
	addr_number: .word number
	addr_lr_bu: .word lr_bu
	
	@ Define we want to use printf and scanf
	.global printf
	.global scanf
	
	4. To compile put the following in makefile
	
		a. gcc:
				gcc -o asmtut asmtut.s
				
	5. You can see the disassembled code with : objdump -d asmtut
		
XXVII. Functions
 
 	1. Functions allow you to structure and reuse code. 
	
	2. You can pass parameters to them using R0, R1, R2, and R3. To pass more you will use the stack. Your function can modify any of these registers. You can modify other registers, but their values must be restored upon exiting the function. You can also modify the stack pointer (R13), but must restore its entry value upon exiting (Avoid if possible). The Link Register (R14) cannot be changed.
	
	3. If you change values in R4 - R12 
	
		a. STMFD SP!, {R4-R12} Saves the values before the function is called
		
		b. LDMFD SP!, {R4-R12} Restores the values after the function exits
	
	4. If a function returns a value it always goes in R0
	
	5. @ Custom Function for summing inputs
	.data
	
	@ Define all the strings and data we will use
	.balign 4
	get_val_1: .asciz "Number 1 :\n"
	
	.balign 4
	get_val_2: .asciz "Number 2 :\n"
	
	@ printf and scanf use %d to represent we are using decimals
	.balign 4
	pattern: .asciz "%d"

	@ Where we will store values to sum
	.balign 4
	num_1: .word 0	
	
	.balign 4
	num_2: .word 0
	
	.balign 4
	sum: .word 0
	
	@ Output for printf
	.balign 4
	output: .asciz "%d + %d = %d\n"
	
	@ Used for backing up the link register
	.balign 4
	lr_bu: .word 0	
	
	.balign 4
	lr_bu_2: .word 0
	
	.text
	
	@ Create our custom function
	@ Can receive values R0 - R3
	sum_vals:
	
		@ Save Link Register
		LDR R2, addr_lr_bu_2
		STR lr, [R2]
		
		@ Sum values and return in R0
		ADD R0, R0, R1
		
		@ Restore link register
		LDR lr, addr_lr_bu_2
		LDR lr, [lr]
		BX lr
		
	@ Address to store link register in
	addr_lr_bu_2: .word lr_bu_2
	
	@ Tell libc where main is
	.global main
	
	main:
		
		@ Store link register
		LDR R1, addr_lr_bu
		STR lr, [R1]
		
		@ Print out message to get 1st value
		LDR R0, addr_get_val_1
		BL printf
		
		@ Save value entered
		LDR R0, addr_pattern
		LDR R1, addr_num_1
		BL scanf
		
		LDR R0, addr_get_val_2
		BL printf
		
		LDR R0, addr_pattern
		LDR R1, addr_num_2
		BL scanf
		
		@ Send values entered to our custom function
		LDR R0, addr_num_1
		LDR R0, [R0]
		LDR R1, addr_num_2
		LDR R1, [R1]
		BL sum_vals
		
		@ Store value returned from function in R3
		MOV R3, R0
		
		@ Assign values to sum for output
		LDR R0, addr_output
		LDR R1, addr_num_1
		LDR R1, [R1]
		LDR R2, addr_num_2
		LDR R2, [R2]
		BL printf
		
		@ Restore link register
		LDR lr, addr_lr_bu
		LDR lr, [lr]
		BX lr
	
	@ Define addresses
	addr_get_val_1: .word get_val_1
	addr_get_val_2: .word get_val_2
	addr_pattern: .word pattern
	addr_num_1: .word num_1
	addr_num_2: .word num_2
	addr_sum: .word sum
	addr_output: .word output
	addr_lr_bu: .word lr_bu
	
	@ Define we want to use printf and scanf
	.global printf
	.global scanf
	
Directives Review

	1. Directives help us write our programs. We have already used them and they are recognized easily because they begin with a period
	
	2. We can store strings with .ascii and .asciz. asciz differs in that it adds a zero byte at the end of the string so it is easy to find the end of the string in memory
	
		a. @ Hello World Example
		.global _start
		_start:
		MOV R7, #4 @ Syscall to output to screen
		MOV R0,  #1 @ Monitor output stream
		MOV R2, #12 @ String Length
		LDR R1, =message @ Load register with address of string
		SWI 0
		
		end:
		MOV R7, #1 @ Exit syscall
		SWI 0
		
		.data @ Signify that what follows is data
		message:
		.ascii "Hello World\n"
	
	3. .word, .byte and .hword are used to define the amount of space to set aside in memory for our data. We can separate values with commas like we did previously
	
		a. numbers:
			.word 1, 2, 3, 4

///////////////////////////

XXVIII. Floating Point Numbers

	1. The use of floating point numbers is provided by the Vector Floating Point (VFP) coprocessor. The VFP provides single precision (32 bit) and double precision (64 bit) for floating point numbers. 
	
	2. Floats start with a positive (0) or negative (1) bit that represents the sign.
	
	3. Bits 30 through 23 represent the exponent 
	
	4. (SLIDE) Bits 22 through 0 represent the fraction. This is referred to as the Mantissa. Just like we can have 0.40625 we can calculate the IEEE format binary
	
		a. .40625 * 2 = 0.8125 (0)
		b. .8125 * 2 = 1.625 (1)
		c. .625 * 2 = 1.25 (1)
		d. .25 * 2 = 0.5 (0)
		e. .5 * 2 = 1 (1)
		f. So .40625 == .01101
		g. Normalize 0.01101 = 1.101 (-2)
		h. Exponent is 127 - 2 = 125 (01111101)
		i. It is positive so the first bit it 0
		j. .40625 = 0 01111101 10100000000000000000000 B
	
	5. (SLIDE) We can't store floats in R0 - R15 so the VFP provides registers S0 - S31 for single precision and D0 - D15 for double precision. Each Dn is mapped to 2 Sn registers
	
	6. @ Print Pi
	@ Used by the compiler to tell libc where main is located
	.global main
	.func main
	
	main:
		LDR R1, addr_pi @ Get the address associated with Pi
		
		@ There are 32 Sx registers for storing floats
		@ Store the value of R1 in a word
		VLDR S0, [R1] @ Move Pi value into S0
		
		@ VCVT is used to convert between floats and integers
		@ This converts to B64 because printf requires a 
		@ double precision value
		@ F64 - Convert to Binary 64
		@ F32 - From Binary 32
		@ D5 - Store in double precision register
		@ S14 - From the current single precision register
		VCVT.F64.F32 D1, S0
		
		LDR R0, =output @ Point to the string
		
		@ Insert the floating point value in R2 and R3 to hold
		@ the double precision value
		VMOV R2, R3, D1
		
		@ When printf is called for a float it looks for the value
		@ in registers R2 and R3
		BL printf @ Print the string
		
	end:
		MOV R7, #1
		SWI 0
		
	addr_pi:
		.word pi
		
	.data
	pi: .float 3.141592
	output: .asciz "The value of Pi is %f\n"
	
	@ Define we want to use printf
	.global printf
	
	7. When performing arithmetic 2 modes are used.
	
		a. Scalar : Used when the destination is in S0 - S7 or D0 - D3. 
		
		b. Vector : The operation operates with registers wrapping from the first to others in the bank
		
	8. Adding floats
	.global main
	.func main
	
	main:
		@ Store float in S0
		LDR R1, addr_num_1
		VLDR S0, [R1]
		
		@ Store float in S1
		LDR R2, addr_num_2
		VLDR S1, [R2]
		
		@ Add floats use f32 for single and f64 for double precision
		@ Also VSUB, VMUL, VDIV, VABS, VSQRT
		VADD.f32 S2, S0, S1
		
		@ Convert for double precision for printf
		VCVT.F64.F32 D1, S2
		
		@ Set the output
		LDR R0, =output
		
		@ Move into proper registers for printf
		VMOV R2, R3, D1
		
		BL printf

	end:
		MOV R7, #1
		SWI 0
		
	addr_num_1: .word num_1
	addr_num_2: .word num_2
		
	.data
		num_1: .float 1.2345
		num_2: .float 1.1111
		output: .asciz "1.2345 + 1.1111 = %f\n"
	
	.global printf
		
	9. The VFP has its own version of CPSR, called the FPSCR, that provides the flags N, Z, C and V. We can use them for conditional execution.
	
	10. Demonstrate comparing floats
	.global main
	.func main
	main:
		LDR R1, addr_num_1
		VLDR S0, [R1]
		
		LDR R2, addr_num_2
		VLDR S1, [R2]
		
		@ Compare values and set flags
		VCMP.F32 S0, S1
		
		@ Copy flags to the ARM status register 
		VMRS APSR_nzcv, FPSCR
		
		@ Conditionally assign a value
		@ Also you can check LT, GT, LE, GE
		MOVEQ R1, #1
		MOVNE R1, #0
		
		@ Set the output
		LDR R0, =output
		
		BL printf
		
	end:
		MOV R7, #1
		SWI 0
		
		addr_num_1: .word num_1
		addr_num_2: .word num_2
		
	.data
	num_1: float 1.234
	num_2: float 5.678
	output: .asciz "Are numbers equal : %d\n"
	
	.global printf
	
XXIX. Switch

	1. Implement a switch statement in assembler
	.global main
	.func main
	main:
		MOV R2, #1
		
		CMP R2, #0
		BEQ case_0
		
		CMP R2, #1
		BEQ case_1
		
		B case_def
		
	case_0:
		LDR R0, =output_0
		B end
		
	case_1:
		LDR R0, =output_1
		b end
		
	case_def:
		LDR R0, =output_def
	
	end:
		BL puts
		MOV R7, #1
		SWI 0
		
	.data
	output_0: .asciz "It's 0"
	output_1: .asciz "It's 1"
	output_def: .asciz "I don't know what it is"
		
	.global puts


