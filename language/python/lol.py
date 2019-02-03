i = 0
while i < 5:
	userInput = raw_input(">>>")
	if userInput in ['hi','HI','Hi']:
		print("Hello")
	else:
		print("I did not understand what you said")
	i = i + 1
