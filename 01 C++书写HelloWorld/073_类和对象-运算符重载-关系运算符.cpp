#include <iostream>
#include <string>
using namespace std;


/*
���ع�ϵ�����
*/


class Person73
{
public:
    string mName;
    int mAge;

    Person73(string name, int age)
    {
        mName = name;
        mAge = age;
    }

    //���� ==
    bool operator==(Person73& p)
    {
        if (this->mName == p.mName && this->mAge == p.mAge)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //���� !=
    bool operator!=(Person73& p)
    {
        if (this->mName == p.mName && this->mAge == p.mAge)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};


void test73_1()
{
    Person73 p1("��ķ", 18);
    //Person73 p2("��ķ", 18);
    Person73 p2("��ķ2", 18);

    if (p1 == p2)
    {
        cout << "p1 �� p2 ����ȵģ�" << endl;
    }
    else
    {
        cout << "p1 �� p2 �ǲ���ȵģ�" << endl;
    }
    cout << "+++++++++++++++++++++++++++++++" << endl;


    if (p1 != p2)
    {
        cout << "p1 �� p2 �ǲ���ȵģ�" << endl;
    }
    else
    {
        cout << "p1 �� p2 ����ȵģ�" << endl;
    }
}


int main73()
{
    cout << "073_��Ͷ���-���������-��ϵ�����" << endl;
    test73_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
