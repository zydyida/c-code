#include <iostream>
using namespace std;

//Main point: structure nested structure.

struct student {
    string name;
    int age;
    int score;
};

//Each teacher teach one student.
struct teacher {
    int id;
    string name;
    int age;
    struct student stu; //substructure
};

int main() {
    struct teacher t1;

    t1.id = 1;
    t1.name = "Person";
    t1.age = 30;

    t1.stu.age = 21;
    t1.stu.name = "Merry";
    t1.stu.score = 100;

    //The teacher's information(including id, name, age)
    cout << "Teacher's id:" << t1.id << endl << "Teacher's name:" << t1.name << endl << "Teacher's age:" << t1.age << endl << endl;

    //The information of the teacher's student(including name, age, score)
    cout << "Student's name:" << t1.stu.name << endl << "Student's age:" << t1.stu.age << endl << "Student's score:" << t1.stu.score << endl << endl;

    system("pause");
    return 0;
}