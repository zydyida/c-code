#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    int score;
}stu1; // The first way to create the structure variable

int main1() {
    struct student arr[3] = {
        {"Jack", 11, 100},
        {"Mark", 12, 99},
        {"Leo", 13, 98}
    };

    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++) {
        cout << "The " << i + 1 <<  " guy" << endl;
        cout << "name:" << arr[i].name << endl << "age:" << arr[i].age << endl << "score:" << arr[i].score << endl << endl;
    }

    system("pause");
    return 0;
}