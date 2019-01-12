// adds an arbitrary list of numbers together

#include "mainlib.cpp"

int main (int argc, char** argv)
{
    if (argc == 1)
	{
	    cout << "sum [a_1] [a_2] ... [a_n] \n";
	    return 0;
	}

    double sum = 0;
    for (int i = 1 ; i < argc ; i++)
        sum += stringToFloat(argv[i]);

    cout << sum << endl;
    
    return 0;
}
