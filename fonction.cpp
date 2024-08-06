#include <iostream>
#include "fonction.hpp"
#include <string>

fonct::fonct(){}

float fonct::sum(float a, float b)
{
    return a + b;
}
float fonct::sub(float a, float b)
{
    return a - b;
}
float fonct::mul(float a, float b)
{
    return a*b;
}
float fonct::div(float a, float b)
{
    return a/b;
}
float fonct::abs(float a)
{
    if (a >= 0)
      return a;
    else
      return -a ;
}
float fonct::high(float a, float b)
{
    if (a > b)
      return a;
    else
      return b;
}
float fonct::low(float a, float b)
{
    if (a < b)
      return a;
    else
      return b;
}