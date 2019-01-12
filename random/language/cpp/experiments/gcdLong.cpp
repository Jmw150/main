// seems bugged 

#include "mainlib.cpp"

int main(int argc, char* argv[])
{
    
    if (0)//argc != 2)
	{
	  cout << "error: wrong number of arguments\n";
	  return 1;
	}
    int a = stringToInt(argv[1]);
    int b = stringToInt(argv[2]);

    gcdLong(a,b);
//    cout << gcd(a,b) << endl;

    return 0;
}
