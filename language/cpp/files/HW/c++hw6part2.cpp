#include <iostream>
using namespace std;

int main ()
{
    int Cap = 30;
    int Amount[Cap];
    Amount[0] = 1;
    for (int i = 1 ; i < Cap ; i++)
    {
        Amount[i] = Amount[i-1] * 2;
    }
    cout << " Day\t\t Amount\n" 
         << "-----\t\t-------\n";
    for (int i = 0; i < Cap ; i++)
    {
        cout << i + 1 << "\t\t" << Amount[i] << endl;
    }
    return 0;
}

/*
 Day             Amount
-----           -------
1               1
2               2
3               4
4               8
5               16
6               32
7               64
8               128
9               256
10              512
11              1024
12              2048
13              4096
14              8192
15              16384
16              32768
17              65536
18              131072
19              262144
20              524288
21              1048576
22              2097152
23              4194304
24              8388608
25              16777216
26              33554432
27              67108864
28              134217728
29              268435456
30              536870912
*/