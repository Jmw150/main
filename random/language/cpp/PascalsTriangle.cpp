// prints out pascals triangle row by row
// need to add mpc library to improve this

#include "mainlib.cpp"

int main (int argc, char** argv)
{
    if (argc == 2) // 0 to end
    {
        int row = stringToPosInt(argv[1]);
        for (int j = 0 ; j <= row ; j++)
        {
            for (int i = 0 ; i <= j ; i++)
                cout << choose(j, i) << ' ';
            cout << endl;
        }
    }
    else if (argc == 3) // start to end
    {
        int start = stringToPosInt(argv[1]); 
        int end = stringToPosInt(argv[2]); 
        
        for (int j = start ; j <= end ; j++)
        {
            for (int i = 0 ; i <= j ; i++)
                cout << choose(j, i) << ' ';
            cout << endl;
        }
    }
    else
    {
        cout << "PascalsTriangle [start] [end]\n  or\n"
             << "PascalsTriangle [end row]\n";
        return 1;
    }
        
    return 0;
}
