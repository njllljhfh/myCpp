#include <iostream>
#include <string>
using namespace std;


/*
类模板
    类模板和函数模板语法相似，在声明模板 template 后面加类，此类称为类模板
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
    //这里必须要指明类模板的参数列表
    Person100<string, int> p1("孙悟空", 999);
    cout << "name: " << p1.mName << endl;
    cout << "age: " << p1.mAge << endl;
}


int main100()
{
    cout << "100_模板-类模板基本语法" << endl << "=======================================================" << endl;

    test100_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}

