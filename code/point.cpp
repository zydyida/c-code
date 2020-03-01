#include <iostream>
using namespace std;

int main1() {
    int a = 10;
    int * p;
    p = &a; //p指向a的地址

    cout << *p <<endl; //解引用
    // 指针均占8字节内存空间
    cout << sizeof(p) << endl;
    cout << sizeof(char *) << endl; 
    cout << sizeof(float *) << endl;
    cout << sizeof(double *) << endl;

    system("pause");

    return 0;
}
