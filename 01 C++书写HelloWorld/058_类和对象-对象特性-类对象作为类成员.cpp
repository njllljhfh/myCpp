#include <iostream>
#include <string>
using namespace std;


/*
�������������Ϊ�����Ա������ʱ���ȹ����Ա��������ٹ�������
������˳���빹��˳���෴��
*/

class Phone58
{
public:
    Phone58(string name)
    {
        cout << "�ֻ� ���캯������" << endl;
        pName = name;
    }
    //�ֻ�Ʒ������
    string pName;

    ~Phone58()
    {
        cout << "�ֻ� ������������" << endl;
    }
};

class Person58
{
public:
    string mName;
    Phone58 mPhone;

    // Phone58 mPhone = pName  ��ʽת����
    Person58(string name, string pName) : mName(name), mPhone(pName)
    {
        cout << "�� ���캯������" << endl;
    }

    ~Person58()
    {
        cout << "�� ������������" << endl;
    }
};

void test58_1()
{
    Person58 p1("����", "ƻ��MAX");
    cout << p1.mName << " ���� " << p1.mPhone.pName << endl;

    cout << "*****************" << endl;
}

int main58() {
    cout << "058_��Ͷ���-��������-�������Ϊ���Ա" << endl;
    test58_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}