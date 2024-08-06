#include <iostream>
#include "fonction.hpp"
#include <string>

int main()
{
  fonct F1{};
  std::cout <<"somme : "<<F1.sum(4,6)<<std::endl;
  std::cout <<"soustraction : "<<F1.sub(4,6)<<std::endl;
  std::cout <<"multiplication : "<<F1.mul(4,6)<<std::endl;
  std::cout <<"division : "<<F1.div(4,6)<<std::endl;
  std::cout <<"valeur absolue : "<<F1.abs(-6)<<std::endl;
  return 0;
}