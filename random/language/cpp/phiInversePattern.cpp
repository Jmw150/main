//This program prints inverse phi between two intervals
// not sure if this is the updated version
// seems slower than I remember
//created by: Jordan Winkler

#include "mainlib.cpp"

int main (int argc, char** argv)
{
    if (argc != 3)
    {
        cout << "phiInverse [start] [end] ";
        return 1;
    }

    /* get interval to compute */
    int a = stringToPosInt(argv[1]);
    int b = stringToPosInt(argv[2]);

    /* allocate memory for up to max set */
    int MAX = phiInverseCap(b) - a; //number of elements
    int* arry = new int[MAX];

    /* rules for computation */
    if (b < 5760) //slow to compute after this
        for (int i = a ; i <= b ; i++)
        {
            phiInverse(i, arry, MAX);
            cout << "phi^-1(" << i << "):\n";
            for (int j = 0 ; arry[j] ; j++)
            {
                cout << arry[j] << ' ';
            } cout << endl;
        }
    else //if (b >= 5760) //room for different rules
        cout << "\nError: b too large\n";

    return 0;
}
