#include <iostream>
#include <string>
using namespace std;


struct Student
{
    string name;
    int age;
    int score; //考试分数
};

struct Teacher {
    int id;
    string name;
    int age;
    struct Student stu;
};

int main25() {
    cout << "025_结构体-结构体嵌套结构体" << endl;

    Teacher t;
    t.id = 10000;
    t.name = "老王";
    t.age = 50;
    t.stu.name = "小王";
    t.stu.age = 20;
    t.stu.score = 60;

    cout << "老师姓名："<<t.name <<"，老师编号："<<t.id<< "，老师年龄：" << t.age 
        << "，辅导的学生: "<< t.stu.name << "，学生年龄: " << t.stu.age<< "，学生分数: " << t.stu.score<< endl;
    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}
