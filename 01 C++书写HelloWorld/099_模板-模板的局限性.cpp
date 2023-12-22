#include <iostream>
using namespace std;


/*
ģ��ľ�����
    ģ�岢�������ܣ���Щ�ض��������ͣ���Ҫ�þ��廯��ʽ������ʵ��


�ܽ᣺
    ���þ��廯ģ�壬���Խ���Զ������͵�ͨ�û�
    ѧϰģ�岢����Ϊ��дģ�壬������ STL �ܹ�����ϵͳ�ṩ��ģ��
*/


class Person99
{
public:
    string mName;
    int mAge;

    Person99(string name, int age)
    {
        this->mName = name;
        this->mAge = age;
    }
};


//�Ա����������Ƿ����
template<class T>
bool myCompare99(T &a, T &b)
{
    if (a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}


//�����ʽ1����������أ��ο���073_��Ͷ���-���������-��ϵ�����


//�����ʽ2:
//���þ��廯 Person99 ��ģ��ʵ�ִ��룬���廯���ȵ���
//template<> ���߱����������Ǿ��廯��ģ��
template<> bool myCompare99(Person99& p1, Person99& p2)
{
    if (p1.mName == p2.mName && p1.mAge == p2.mAge)
    {
        return true;
    }
    else
    {
        return false;
    }
}


void test99_1()
{
    int a = 10;
    int b = 20;
    bool ret = myCompare99(a, b);
    if (ret)
    {
        cout << "a == b" << endl;
    }
    else
    {
        cout << "a != b" << endl;
    }
}


void test99_2()
{
    Person99 p1("Tom", 10);
    Person99 p2("Tom", 10);
    bool ret = myCompare99(p1, p2);
    if (ret)
    {
        cout << "p1 == p2" << endl;
    }
    else
    {
        cout << "p1 != p2" << endl;
    }
}


int main99()
{
    cout << "099_ģ��-ģ��ľ�����" << endl << "=======================================================" << endl;

    test99_1();
    cout << "----------------------------------------------------------------" << endl;

    test99_2();

    //system("pause");
    cin.get();
    return 0;
}

