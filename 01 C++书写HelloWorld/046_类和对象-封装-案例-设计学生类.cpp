#include <iostream>
#include <string>
using namespace std;


//���һ��ѧ���࣬������������ѧ�ţ�
//���Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

class Student46
{
public:
    //���е����Ժ���Ϊ������ͳһ��Ϊ ��Ա
    //����   ��Ա���� ��Ա����
    //��Ϊ   ��Ա���� ��Ա����

    //����
    string name;
    int id;

    //��Ϊ
    //��ʾ��Ϣ
    void showStudent()
    {
        cout << "������" << name << "\tѧ�ţ�" << id << endl;
    }

    //��������
    void setName(string n)
    {
        name = n;
    }

    //����id
    void setId(int i)
    {
        id = i;
    }

};

int main46() {
    cout << "046_��Ͷ���-��װ-����-���ѧ����" << endl;

    Student46 s1;
    s1.name = "����";
    s1.id = 123;
    s1.showStudent();
    cout << "----------------------------------------------------------------" << endl;

    Student46 s2;
    s2.setName("����");
    s2.setId(456);
    s2.showStudent();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
