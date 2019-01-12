//messing with string, this program is useless

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string face = "face";
    
    cout << "name " << face << endl;
    cout << "size " << face.size() << endl;

    for (int i = 0 ; i < face.length() ; i++)
    {
        cout << "a[" << i << "] " << face[i] << endl;
    }

    face[0] = face[1];
    
    cout << face << endl;

    face.insert(0,"f");


    cout << face << endl;

    face.insert(1,5,'a');
    
    cout << face << endl;

    cout << "max_size " << face.max_size() << endl;

    cout << "c_string " << face.c_str() << endl;

    cout << "sub string " << face[0] << face.substr(7) << endl;

    int aceStart = face.find("ace");

    cout << "without counting " << face[0] 
         << face.substr(aceStart) << endl;


    return 0;

}
