/* ARM */
.global _start

_start:
    MOV R1, #0xA
    ADD R0, R1, #0x14
    MOV R7, #0
    SWI 0


