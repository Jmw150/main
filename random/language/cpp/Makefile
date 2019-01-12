# makefile for c++ programs

# would be nice to be able to clean files from this command
# or if makefiles kept track of files outside currect directory
# or if I used bash instead...

programs= countwords sum charStat primesBetween toAscii sigma polycoef \
          phiInverse pascalsTriangle nameConicSection lcm age dndroll \
          calcDR baseconvert
bin=/home/jordan/Backup/nonsensitive/programs/bin/
cc=g++
output=$(cc) -o $(bin)

# convert base 10 to another base
baseconvert : baseconverter.cpp
	$(output)baseconvert baseconverter.cpp

# calculates the actual hp of a elderscrolls character
calcDR : calcDR.cpp
	$(output)calcDR calcDR.cpp

# rolls large number of dice
dndroll : dndRoll.cpp
	$(output)dndroll dndRoll.cpp

# gets age of something, interactive
age : age.cpp
	$(output)age age.cpp

# least common multiple
lcm : lcm.cpp
	$(output)lcm lcm.cpp

# deduces the conic section
nameConicSection : nameTheConicSection.cpp
	$(output)nameConicSection nameTheConicSection.cpp

# prints out a section of pascals triangle
pascalsTriangle : PascalsTriangle.cpp
	$(output)pascalsTriangle PascalsTriangle.cpp

# number theoretic function phi inverse
phiInverse : phiInversePattern.cpp
	$(output)phiInverse phiInversePattern.cpp

# prints the coefficient of a given polnomial
polycoef : polycoeffiecient.cpp 
	$(output)polycoef polycoeffiecient.cpp

# number theoretic function called sigma
sigma : sigma.cpp
	g++ -o $(bin)sigma sigma.cpp

# translates ascii characters to their literal numbers in decimal 
toAscii : toAscii.cpp
	g++ -o $(bin)toAscii toAscii.cpp

# give all prime numbers between two numbers
primesBetween : seive.cpp
	g++ -o $(bin)primesBetween seive.cpp

# count the number of each alphabetical letter show up in a file
charStat : charStat.cpp
	g++ -o $(bin)charStat charStat.cpp

# counts sequences of alphabetical characters (words)
countwords : wordcount.cc
	gcc -o $(bin)countwords wordcount.cc

# sums up floating point numbers
sum : sumfloat.cpp
	g++ -o $(bin)sum sumfloat.cpp

all : $(programs)
