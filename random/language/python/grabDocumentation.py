startString = "/**"
endString = "**/"

#something like this
with open(inputfile, 'rb') as infile, open(outputfile, 'wb') as outfile:
     decrypt_bigfile(infile, outfile, priv_key)
