ls *.cpp | while read line
do
    g++ $line -o temp/${line%.cpp}
done


#back up your stuff before attempting this

