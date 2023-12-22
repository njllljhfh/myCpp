#include <iostream>
using namespace std;


/*
��ģ���뺯��ģ��������Ҫ������:
    1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ
    2����ģ����ģ������б��п�����Ĭ�ϲ���
*/


template<class NameType, class AgeType = int>
class Person101
{
public:
    NameType mName;
    AgeType mAge;

    Person101(NameType name, AgeType age)
    {
        this->mName = name;
        this->mAge = age;
    }

    void showPerson()
    {
        cout << "name: " << this->mName << " age: " << this->mAge << endl;
    }
};


void test101_1()
{
    //1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ
    //Person101 p1("�����", 1000); //�����޷����Զ������Ƶ�

    Person101<string, int> p1("�����", 1000);
    p1.showPerson();

    p1.mName = "����";
    p1.showPerson();
    cout << "*******************" << endl;

    //ָ�볣������ϰ��
    Person101<string, int>* const p2 = &p1;
    (*p2).mName = "����";
    (*p2).mAge = 111;
    p1.showPerson();
}


void test101_2()
{
    //2����ģ����ģ������б��п�����Ĭ�ϲ���������ģ��û��Ĭ�ϲ�����
    Person101<string> p1("��˽�", 999);
    p1.showPerson();
}

int main101()
{
    cout << "101_ģ��-��ģ���뺯��ģ������" << endl << "=======================================================" << endl;

    test101_1();
    cout << "---------------------------------------------------------------------------" << endl;

    test101_2();

    //system("pause");
    cin.get();
    return 0;
}


