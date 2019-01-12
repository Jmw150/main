//test program for a class of rational numbers called rat

#include <iostream>
#include "mylib.cpp"
using namespace std;

int main ()
{
    cout << "choose two rational numbers ";
    int anum, aden, bnum, bden;
    cin >> anum >> aden >> bnum >> bden;
    rat A(anum, aden);
    rat B(bnum, bden);
    rat C(1,1);
    
    cout << "\n+ "; C = A + B; C.p(); cout << endl;
    cout << "\n- "; C = A - B; C.p(); cout << endl;
    cout << "\n* "; C = A * B; C.p(); cout << endl;
    cout << "\n/ "; C = A / B; C.p(); cout << endl;
    cout << "\n> " << ((A > B)?1:0) << endl;
    cout << "\n< " << ((A < B)?1:0) << endl;
    cout << "\n= " << ((A == B)?1:0) << endl;
    cout << "\n>= " << ((A >= B)?1:0) << endl;
    cout << "\n<= " << ((A <= B)?1:0) << endl;
    return 0;
}



