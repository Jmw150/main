#include "mainlib.cpp"

int main (int argc, char* argv[]) 
{
    if (argc != 3)
	{
        cout << "calcDR [DR] [hp]\n";
        return 1;
	}
    double DR = stringToFloat(argv[1]);
    double hp = stringToFloat(argv[2]);

    cout << "Your actual hp is " << realHp(DR,hp) << endl;
    return 0;
}
