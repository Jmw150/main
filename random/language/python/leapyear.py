def leapYear (year) :
    if (year % 4 == 0) and ((not year % 100 == 0) or (year % 400 == 0)) :
        return 1
    else :
        return 0
            

print (leapYear(eval(raw_input())))
