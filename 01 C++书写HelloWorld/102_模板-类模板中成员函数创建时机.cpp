#include <iostream>
using namespace std;


/*
��ģ���г�Ա��������ͨ���г�Ա��������ʱ�����������:
    ��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
    ��ģ���еĳ�Ա������ ����ʱ �Ŵ���
*/


class Person102_1
{
public:
    void showPerson1()
    {
        cout << "Person102_1 show" << endl;
    }
};


class Person102_2
{
public:
    void showPerson2()
    {
        cout << "Person102_2 show" << endl;
    }
};


template<class T>
class MyClass102
{
public:
    T obj;

    //��ģ���еĳ�Ա������ ����ʱ �Ŵ���
    void func1()
    {
        obj.showPerson1();
    }

    void func2()
    {
        obj.showPerson2();
    }
};


void test102_1()
{
    MyClass102<Person102_1> m;
    //��ģ���еĳ�Ա������ ����ʱ �Ŵ���
    m.func1();
    //m.func2(); //����
    cout << "*************" << endl;

    MyClass102<Person102_2> m2;
    //m2.func1(); //����
    m2.func2();
}


int main102()
{
    cout << "102_ģ��-��ģ���г�Ա��������ʱ��" << endl << "=======================================================" << endl;

    test102_1();
    cout << "---------------------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}

