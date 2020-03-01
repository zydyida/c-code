#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    int score;
}stu1; // The first way to create the structure variable

int main1() {
    stu1.age = 1;
    stu1.name = "Jack";
    stu1.score = 100;

    cout << "The first guy" << endl;
    cout << "name:" << stu1.name << endl << "age:" << stu1.age << endl << "score:" << stu1.score << endl << endl;
    
    struct student stu2; //The second way to create the structure hh

    stu2.age = 2;
    stu2.name = "Pile";
    stu2.score = 60;

    cout << "The second guy" << endl;
    cout << "name:" << stu2.name << endl << "age:" << stu2.age << endl << "score:" << stu2.score << endl << endl;

    struct student stu3 = {"Ace", 10, 80};

    cout << "The third guy" << endl;
    cout << "name:" << stu3.name << endl << "age:" << stu3.age << endl << "score:" << stu3.score << endl;

    system("pause");
    return 0;
}