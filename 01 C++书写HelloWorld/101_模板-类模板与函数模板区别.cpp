#include <iostream>
using namespace std;


/*
类模板与函数模板区别主要有两点:
    1、类模板没有自动类型推导的使用方式
    2、类模板在模板参数列表中可以有默认参数
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
    //1、类模板没有自动类型推导的使用方式
    //Person101 p1("孙悟空", 1000); //错误，无法用自动类型推导

    Person101<string, int> p1("孙悟空", 1000);
    p1.showPerson();

    p1.mName = "李四";
    p1.showPerson();
    cout << "*******************" << endl;

    //指针常量（复习）
    Person101<string, int>* const p2 = &p1;
    (*p2).mName = "王五";
    (*p2).mAge = 111;
    p1.showPerson();
}


void test101_2()
{
    //2、类模板在模板参数列表中可以有默认参数。函数模板没有默认参数。
    Person101<string> p1("猪八戒", 999);
    p1.showPerson();
}

int main101()
{
    cout << "101_模板-类模板与函数模板区别" << endl << "=======================================================" << endl;

    test101_1();
    cout << "---------------------------------------------------------------------------" << endl;

    test101_2();

    //system("pause");
    cin.get();
    return 0;
}


