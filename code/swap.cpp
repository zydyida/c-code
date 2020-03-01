#include "swap.h"

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "In swap function, a = " << a << endl;
    cout << "In swap function, b = " << b << endl;
}