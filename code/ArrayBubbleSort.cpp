#include <iostream>
using namespace std;

//冒泡升序排序
void bubbleSort(int * arr, int len) {
    for (int i = 0; i < len - 1; i++) { //趟数 = len - 1
        for (int j = 0; j < len - i - 1; j++) { //每趟从0开始至len-i-1处
            if (arr[j] > arr[j+1]) { //两两比较，较大值往后换
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//打印
void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main1() {
    int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "The origianl array:";
    printArray(arr, len);

    bubbleSort(arr, len);

    cout << "The array after ascending order:";
    printArray(arr, len);

    system("pause");

    return 0;
}
