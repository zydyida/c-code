#include <iostream>
#include <time.h>
using namespace std;

//The structure of student
struct Student {
    string name;
    int score;
};

//The structure of teacher
struct Teacher {
    string name;
    struct Student arr_stu[5]; //substructure
};

void allocateData(struct Teacher arr[], int len) {
    string tName = "teacher";
    string sName = "student";
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; i++) {
        arr[i].name = tName + nameSeed[i]; //assign teachers' names
        for (int j = 0; j < 5; j++) {
            arr[i].arr_stu[j].name = sName + nameSeed[j]; //assign students' names
            arr[i].arr_stu[j].score = rand() % 61 + 40; //range from 0 to 100
        }
    }
}

void printData(struct Teacher arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i].name << endl; //output teacher's name
        for (int j = 0; j < 5; j++) {
            cout << arr[i].arr_stu[j].name << " " << arr[i].arr_stu[j].score << endl; //output the information of students of each teacher
        }
        cout << endl;
    }
}

int main() {
    srand((unsigned int)time(NULL)); //random number seed
    Teacher arr[3];
    int len = sizeof(arr) / sizeof(arr[0]);

    allocateData(arr, len);

    printData(arr, len);

    system("pause");
    return 0;
}