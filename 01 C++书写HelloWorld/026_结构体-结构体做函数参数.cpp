#include <iostream>
#include <string>
using namespace std;


struct Student
{
    string name;
    int age;
    int score; //���Է���
};

//ֵ����
void printStudent261(Student s)
{
    s.age = 100;
    cout << "������" << s.name << "�����䣺" << s.age << "��ѧ������: " << s.score << endl;
}

//��ַ����
void printStudent262(Student* s)
{
    s->age = 99;
    cout << "������" << s->name << "�����䣺" << s->age << "��ѧ������: " << s->score << endl;
}


int main26() {
    cout << "026_�ṹ��-�ṹ������������" << endl;

    Student s;
    s.name = "С��";
    s.age = 20;
    s.score = 60;
    cout << "main�����д�ӡ��ʼ��Ϣ ������" << s.name << "�����䣺" << s.age << "��ѧ������: " << s.score << endl;
    cout << "----------------------------------------------------------------" << endl;

    cout << "ֵ����:" << endl;
    printStudent261(s);
    cout << "main�����д�ӡ ������" << s.name << "�����䣺" << s.age << "��ѧ������: " << s.score << endl;
    cout << "----------------------------------------------------------------" << endl;

    cout << "��ַ����:" << endl;
    printStudent262(&s);
    cout << "main�����д�ӡ ������" << s.name << "�����䣺" << s.age << "��ѧ������: " << s.score << endl;
    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}
