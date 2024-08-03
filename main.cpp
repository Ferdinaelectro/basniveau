#include <iostream>

int main()
{
    unsigned char b = 0b0001 , a = 0b0011;
    bool c;
    std::cout << "hello first repositry "<<std::endl;
    c = b & (1<<0);
    if  (a & (1<<2))
      std::cout <<"le bit  à cette position est à 1"<<std::endl;
    else 
      std::cout <<"le bit  à cette position est à 0"<<std::endl;
    std::cout << "la valeur de c = "<<c<<std::endl;
    return 0 ;
}