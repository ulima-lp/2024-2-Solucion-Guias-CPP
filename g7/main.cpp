#include <iostream>
#include "e_10.h"

int main()
{
    int num1 = 10;
    int num2 = 20;
    int num = 0;
    int* pNum = &num;
    Pregunta10(num1, num2, pNum);
    std::cout << num << '\n';
    return 0;
}