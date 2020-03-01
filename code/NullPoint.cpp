#include <iostream>
using namespace std;

int main1() {
    /*
    **空指针：指针变量指向内存中编号为0的空间

    **用途：初始化指针变量

    **注意：空指针指向的内存是不可以访问的
    */

    int * p = NULL;

    //segmentation fault
    //内存编号0~255系统占用内存，不允许用户访问
    cout << *p <<endl; //解引用

    int * p = (int *)0x1100;

    //野指针：指针变量指向非法的内存空间
    cout << *p <<endl;

    system("pause");

    return 0;
}
