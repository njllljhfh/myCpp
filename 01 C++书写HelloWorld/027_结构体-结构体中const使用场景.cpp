#include <iostream>
#include <string>
using namespace std;


struct Student
{
    string name;
    int age;
    int score; //���Է���
};

void printStudent271(Student s)
{
    cout << "������" << s.name << "�����䣺" << s.age << "��ѧ������: " << s.score << endl;
}

// const Student *s ��sָ��Ķ��󲻿��޸ģ��ɷ�ֹ�����
void printStudent272(const Student *s)
{
    //s->age = 100;  // ����
    cout << "������" << s->name << "�����䣺" << s->age << "��ѧ������: " << s->score << endl;
}

int main27() {
    cout << "027_�ṹ��-�ṹ����const��ʹ�ó���" << endl;

    Student s = { "����",15,60 };
    //cout << "main�����д�ӡ��ʼ��Ϣ ������" << s.name << "�����䣺" << s.age << "��ѧ������: " << s.score << endl;
    cout << "----------------------------------------------------------------" << endl;


    printStudent271(s);
    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}
