#include <iostream>
using namespace std;


/*
继承中，同名成员处理方式
    访问子类同名成员 直接访问即可
    访问父类同名成员 需要加作用域


如果子类中出现和父类同名的成员函数，子类的同名成员函数会隐藏掉父类中所有同名成员函数（即父类中的所有同名重载函数都会被隐藏掉）
如果想访问到父类中被隐藏的同名成员函数，需要加父类作用域
*/


class Base79
{
public:
    int mA;

    Base79()
    {
        mA = 100;
    }

    void func()
    {
        cout << "Base79 的 func 函数" << endl;
    }

    void func(int a)
    {
        cout << "Base79 的 func(int a) 函数" << endl;
    }

};


class Son79 : public Base79
{
public:
    int mA;

    Son79()
    {
        mA = 200;
    }

    void func()
    {
        cout << "Son79 的 func 函数" << endl;
    }
};


void test79_1()
{
    Son79 s;
    cout << "Son79 中的 mA = " << s.mA << endl;

    //如果通过子类对象 想要访问父类中的同名成员函数，需要加作用域
    cout << "Base79 中的 mA = " << s.Base79::mA << endl;

}

void test79_2()
{
    Son79 s;
    s.func();

    //如果通过子类对象 想要调用父类中的同名成员属性，需要加作用域
    s.Base79::func();

    //如果子类中出现和父类同名的成员函数，子类的同名成员函数会隐藏掉父类中所有同名成员函数（即父类中的所有同名重载函数都会被隐藏掉）
    //s.func(10); // 报错
    //如果想访问到父类中被隐藏的同名成员函数，需要加父类作用域
    s.Base79::func(10);
}


int main79()
{
    cout << "079_类和对象-继承-同名成员处理" << endl;
    test79_1();
    cout << "----------------------------------------------------------------" << endl;

    test79_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
