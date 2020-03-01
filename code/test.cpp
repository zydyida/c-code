// #include "swap.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main1()
{
    int a = 10;
    int b = 11;

    swap(a, b);
    cout << "In main function, a = " << a << endl;
    cout << "In main function, b = " << b << endl;
    system("pause");
    return 0;
}