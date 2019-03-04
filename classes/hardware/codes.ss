; stuff for c335

'(clock-cycle-total (sum (* instruction clock-cycles-per-instruction)))
'(cpi (/ clock-cycle instruction))
'(cpu-time (* instructions cpi clock-cycle-time))

; cmos complementary metal oxide semiconductor, 

'(power (about (* .5 capacitive-load voltage^2 frequency-switched)))
; spec system performance evaluation cooperative

;amdahl's law
; execution time after improvement = execution time affected by improvement / (amount of improvement) + execution time unaffected
; it is the law of diminshing returns

'(seconds/program (* instructions/program clock-cycles/instruction seconds/clock-cycle))



; r type
; location 


