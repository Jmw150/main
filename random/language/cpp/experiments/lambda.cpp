// lambda-ish ability in c++

#include <iostream>

int main() 
{
    //declaration of lambda function in c++
    auto f = [](int x) { return x*42; }; 

    std::cout << "f() = " << f(2) << std::endl;

    return 0;

