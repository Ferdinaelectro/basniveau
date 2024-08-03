#include <iostream>

int main()
{
    unsigned char b = 0b0001;
    bool c;
    std::cout << "hello first repositry "<<std::endl;
    c = b & (1<<0);
    std::cout << "la valeur de c = "<<c<<std::endl;
    return 0 ;
}