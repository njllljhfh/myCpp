#include <iostream>
#include <string>
using namespace std;


/*
��ģ���Ա��������ʵ��


�ܽ᣺
    ��ģ���г�Ա��������ʵ��ʱ����Ҫ����ģ������б�
*/


template<class T1, class T2>
class Person105
{
public:
    T1 mName;
    T2 mAge;

public:
    Person105(T1 name, T2 age);
    void showPerson();
};


//��ģ�幹�캯������ʵ��
template<class T1,class T2>
Person105<T1, T2>::Person105(T1 name, T2 age)
{
    this->mName = name;
    this->mAge = age;
}


//��ģ���Ա��������ʵ��
template<class T1,class T2>
void Person105<T1, T2>::showPerson()
{
    cout << "������" << this->mName << " ���䣺" << this->mAge << endl;
}


void test105_1()
{
    Person105<string, int> p("����", 18);
    p.showPerson();
}


int main()
{
    cout << "105_ģ��-��ģ���Ա��������ʵ��" << endl << "=======================================================" << endl;

    test105_1();
    cout << "---------------------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
