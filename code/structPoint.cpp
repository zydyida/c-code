#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    int score;
};

int main1() {
    struct student stu1 = {"Jack", 11, 100};
    struct student * p = &stu1;

    p->score = 89;  //Pointers can access members through the -> operator.
    cout << "name:" << p->name << endl << "age:" << p->age << endl << "score:" << p->score << endl << endl;

    system("pause");
    return 0;
}