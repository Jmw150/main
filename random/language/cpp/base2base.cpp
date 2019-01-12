// generic base converter

#include "mainlib.cpp"

int main (int argc, char** argv)
{
    if (argc != 4)
    {
        cout << "base2base [number] [starting base] [target base]\n";
        return 1;
    }

    int start_base = stringToPosInt(argv[2]);
    int target_base = stringToPosInt(argv[3]);

    // change all bases to base 10
    if (start_base != 10)
    {
        // convert each term
        cout << "stub";
        return 1;
    }


    int number = stringToInt(argv[1]);
    
    // change base 10 to sugested base
    int target_num_len = 64;
    int* target_num = new int[target_num_len]; // sloppy max
    for (int i = 0 ; i < target_num_len ; i++)
        target_num[i] = 0;

    changeToBase(number, target_base, target_num, target_num_len);

    // flip and clip 0s
    while (target_num[target_num_len-1] == 0)
        target_num_len--; 

    flipString(target_num, 0, target_num_len-1);


    // print number
    for (int i = 0 ; i < target_num_len ; i++)
        cout << target_num[i] << ' ';
    cout << endl;

    return 0;
}
