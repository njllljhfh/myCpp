#include <iostream>
#include <string>
using namespace std;


/*
��ģ��
    ��ģ��ͺ���ģ���﷨���ƣ�������ģ�� template ������࣬�����Ϊ��ģ��
*/


template<class NameType, class AgeType>
class Person100
{
public:
    NameType mName;
    AgeType mAge;

    Person100(NameType name, AgeType age)
    {
        this->mName = name;
        this->mAge = age;
    }
};


void test100_1()
{
    //�������Ҫָ����ģ��Ĳ����б�
    Person100<string, int> p1("�����", 999);
    cout << "name: " << p1.mName << endl;
    cout << "age: " << p1.mAge << endl;
}


int main100()
{
    cout << "100_ģ��-��ģ������﷨" << endl << "=======================================================" << endl;

    test100_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}

