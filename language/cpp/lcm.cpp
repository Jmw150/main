#include "mainlib.cpp"

int main (int argc, char* argv[])
{
    if (argc != 3)
	{
        cout << "lcm [a] [b]\n";
        return 1;
	}
    int a = stringToInt(argv[1]);
    int b = stringToInt(argv[2]);

    int GCD = gcd(a,b);
    cout << (a*b)/GCD << endl;

    return 0;
}
