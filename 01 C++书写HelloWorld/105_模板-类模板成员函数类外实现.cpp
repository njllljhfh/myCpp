#include <iostream>
#include <string>
using namespace std;


/*
类模板成员函数类外实现


总结：
    类模板中成员函数类外实现时，需要加上模板参数列表
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


//类模板构造函数类外实现
template<class T1,class T2>
Person105<T1, T2>::Person105(T1 name, T2 age)
{
    this->mName = name;
    this->mAge = age;
}


//类模板成员函数类外实现
template<class T1,class T2>
void Person105<T1, T2>::showPerson()
{
    cout << "姓名：" << this->mName << " 年龄：" << this->mAge << endl;
}


void test105_1()
{
    Person105<string, int> p("张三", 18);
    p.showPerson();
}


int main()
{
    cout << "105_模板-类模板成员函数类外实现" << endl << "=======================================================" << endl;

    test105_1();
    cout << "---------------------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
