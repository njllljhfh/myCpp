#include <iostream>
#include <string>
using namespace std;


/*
重载关系运算符
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

    //重载 ==
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

    //重载 !=
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
    Person73 p1("汤姆", 18);
    //Person73 p2("汤姆", 18);
    Person73 p2("汤姆2", 18);

    if (p1 == p2)
    {
        cout << "p1 和 p2 是相等的！" << endl;
    }
    else
    {
        cout << "p1 和 p2 是不相等的！" << endl;
    }
    cout << "+++++++++++++++++++++++++++++++" << endl;


    if (p1 != p2)
    {
        cout << "p1 和 p2 是不相等的！" << endl;
    }
    else
    {
        cout << "p1 和 p2 是相等的！" << endl;
    }
}


int main73()
{
    cout << "073_类和对象-运算符重载-关系运算符" << endl;
    test73_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
