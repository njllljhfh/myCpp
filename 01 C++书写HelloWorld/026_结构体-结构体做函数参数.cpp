#include <iostream>
#include <string>
using namespace std;


struct Student
{
    string name;
    int age;
    int score; //考试分数
};

//值传递
void printStudent261(Student s)
{
    s.age = 100;
    cout << "姓名：" << s.name << "，年龄：" << s.age << "，学生分数: " << s.score << endl;
}

//地址传递
void printStudent262(Student* s)
{
    s->age = 99;
    cout << "姓名：" << s->name << "，年龄：" << s->age << "，学生分数: " << s->score << endl;
}


int main26() {
    cout << "026_结构体-结构体做函数参数" << endl;

    Student s;
    s.name = "小王";
    s.age = 20;
    s.score = 60;
    cout << "main函数中打印初始信息 姓名：" << s.name << "，年龄：" << s.age << "，学生分数: " << s.score << endl;
    cout << "----------------------------------------------------------------" << endl;

    cout << "值传递:" << endl;
    printStudent261(s);
    cout << "main函数中打印 姓名：" << s.name << "，年龄：" << s.age << "，学生分数: " << s.score << endl;
    cout << "----------------------------------------------------------------" << endl;

    cout << "地址传递:" << endl;
    printStudent262(&s);
    cout << "main函数中打印 姓名：" << s.name << "，年龄：" << s.age << "，学生分数: " << s.score << endl;
    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}
