#include <iostream>
#include <string>
using namespace std;


struct Student
{
    string name;
    int age;
    int score; //���Է���
};

struct Teacher {
    int id;
    string name;
    int age;
    struct Student stu;
};

int main25() {
    cout << "025_�ṹ��-�ṹ��Ƕ�׽ṹ��" << endl;

    Teacher t;
    t.id = 10000;
    t.name = "����";
    t.age = 50;
    t.stu.name = "С��";
    t.stu.age = 20;
    t.stu.score = 60;

    cout << "��ʦ������"<<t.name <<"����ʦ��ţ�"<<t.id<< "����ʦ���䣺" << t.age 
        << "��������ѧ��: "<< t.stu.name << "��ѧ������: " << t.stu.age<< "��ѧ������: " << t.stu.score<< endl;
    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}
