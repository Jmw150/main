// number theoretic function called sigma
// gets interval of sigma value or just value

#include "mainlib.cpp"

int main (int argc, char** argv)
{
    if (argc == 2)
    {
        int i = stringToInt(argv[1]);
        cout << sigma(i) << endl;
        return 0;
    }
    if (argc == 3)
    {
        int a = stringToInt(argv[1]);
        int b = stringToInt(argv[2]);

        for (int i = a ; i <= b ; i++)
            cout << sigma(i) << endl;
        return 0;
    }
    else
    {
        cout << "sigma [int]\n or\n sigma [start] [end]";
        return 1;
    }

}
