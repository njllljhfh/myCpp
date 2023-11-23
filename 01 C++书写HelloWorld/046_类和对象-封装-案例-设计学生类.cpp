#include <iostream>
#include <string>
using namespace std;


//设计一个学生类，属性有姓名和学号，
//可以给姓名和学号赋值，可以显示学生的姓名和学号

class Student46
{
public:
    //类中的属性和行为，我们统一称为 成员
    //属性   成员属性 成员变量
    //行为   成员函数 成员方法

    //属性
    string name;
    int id;

    //行为
    //显示信息
    void showStudent()
    {
        cout << "姓名：" << name << "\t学号：" << id << endl;
    }

    //设置姓名
    void setName(string n)
    {
        name = n;
    }

    //设置id
    void setId(int i)
    {
        id = i;
    }

};

int main46() {
    cout << "046_类和对象-封装-案例-设计学生类" << endl;

    Student46 s1;
    s1.name = "张三";
    s1.id = 123;
    s1.showStudent();
    cout << "----------------------------------------------------------------" << endl;

    Student46 s2;
    s2.setName("李四");
    s2.setId(456);
    s2.showStudent();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
