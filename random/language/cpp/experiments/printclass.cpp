#include <iostream>

class dataType
{
public:
    int dat;
};
    

std::ostream& operator<< (std::ostream &out, dataType const& data) 
{
    out << data.dat << ':';

    return out;
}

int main ()
{
    dataType cheese;
    cheese.dat = 1;

    std::cout << cheese << '\n';

    return true;
}
