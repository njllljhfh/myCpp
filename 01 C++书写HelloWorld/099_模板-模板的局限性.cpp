#include <iostream>
using namespace std;


/*
模板的局限性
    模板并不是万能，有些特定数据类型，需要用具体化方式做特殊实现


总结：
    利用具体化模板，可以解决自定义类型的通用化
    学习模板并不是为了写模板，而是在 STL 能够运用系统提供的模板
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


//对比两个数据是否相等
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


//解决方式1：运算符重载，参看：073_类和对象-运算符重载-关系运算符


//解决方式2:
//利用具体化 Person99 的模板实现代码，具体化优先调用
//template<> 告诉编译器，这是具体化的模板
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
    cout << "099_模板-模板的局限性" << endl << "=======================================================" << endl;

    test99_1();
    cout << "----------------------------------------------------------------" << endl;

    test99_2();

    //system("pause");
    cin.get();
    return 0;
}

