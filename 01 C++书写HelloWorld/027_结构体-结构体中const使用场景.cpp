#include <iostream>
#include <string>
using namespace std;


struct Student
{
    string name;
    int age;
    int score; //考试分数
};

void printStudent271(Student s)
{
    cout << "姓名：" << s.name << "，年龄：" << s.age << "，学生分数: " << s.score << endl;
}

// const Student *s ，s指向的对象不可修改，可防止误操作
void printStudent272(const Student *s)
{
    //s->age = 100;  // 报错
    cout << "姓名：" << s->name << "，年龄：" << s->age << "，学生分数: " << s->score << endl;
}

int main27() {
    cout << "027_结构体-结构体中const的使用场景" << endl;

    Student s = { "张三",15,60 };
    //cout << "main函数中打印初始信息 姓名：" << s.name << "，年龄：" << s.age << "，学生分数: " << s.score << endl;
    cout << "----------------------------------------------------------------" << endl;


    printStudent271(s);
    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}
