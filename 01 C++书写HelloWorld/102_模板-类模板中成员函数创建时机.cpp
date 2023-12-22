#include <iostream>
using namespace std;


/*
类模板中成员函数和普通类中成员函数创建时机是有区别的:
    普通类中的成员函数一开始就可以创建
    类模板中的成员函数在 调用时 才创建
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

    //类模板中的成员函数在 调用时 才创建
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
    //类模板中的成员函数在 调用时 才创建
    m.func1();
    //m.func2(); //报错
    cout << "*************" << endl;

    MyClass102<Person102_2> m2;
    //m2.func1(); //报错
    m2.func2();
}


int main102()
{
    cout << "102_模板-类模板中成员函数创建时机" << endl << "=======================================================" << endl;

    test102_1();
    cout << "---------------------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}

