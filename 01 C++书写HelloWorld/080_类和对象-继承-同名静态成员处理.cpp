#include <iostream>
using namespace std;


/*
继承中，同名静态成员处理方式
    访问子类同名成员 直接访问即可
    访问父类同名成员 需要加作用域


如果子类中出现和父类同名的静态成员函数，子类的同名静态成员函数会隐藏掉父类中所有同名静态成员函数（即父类中的所有同名重载静态函数都会被隐藏掉）
如果想访问到父类中被隐藏的同名静态成员函数，需要加父类作用域


总结：同名静态成员的处理方式和非静态成员的处理方式是一样的，只不过静态成员有两种访问方式（通过对象访问 和 通过类名访问）
*/


class Base80
{
public:
    static int mA;

    static void func()
    {
        cout << "Base80 的 static void func() 函数" << endl;
    }

    static void func(int a)
    {
        cout << "Base80 的 static void func(int a) 函数" << endl;
    }
};

int Base80::mA = 100;


class Son80 : public Base80
{
public:
    static int mA;

    static void func()
    {
        cout << "Son80 的 static void func() 函数" << endl;
    }
};

int Son80::mA = 200;


void test80_1()
{
    //同名静态成员属性
    cout << "通过 对象 访问静态成员属性" << endl;
    Son80 s;
    cout << "Son80 中的 mA = " << s.mA << endl;
    cout << "Base80 中的 mA = " << s.Base80::mA << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++" << endl;

    cout << "通过 类名 访问静态成员属性" << endl;
    cout << "Son80 中的 mA = " << Son80::mA << endl;
    //第一个::代表通过类名方式访问，第二个::代表访问父类作用域下的成员
    cout << "Base80 中的 mA = " << Son80::Base80::mA << endl;  // 重点！！！
}

void test80_2()
{
    //同名静态成员函数
    cout << "通过 对象 访问静态成员函数" << endl;
    Son80 s;
    s.func();
    s.Base80::func();
    cout << "++++++++++++++++++++++++++++++++++++++++++" << endl;

    cout << "通过 类名 访问静态成员函数" << endl;
    Son80::func();
    Son80::Base80::func();

    //如果子类中出现和父类同名的静态成员函数，子类的同名静态成员函数会隐藏掉父类中所有同名静态成员函数（即父类中的所有同名重载静态函数都会被隐藏掉）
    //Son80::func(100); //报错
    //如果想访问到父类中被隐藏的同名静态成员函数，需要加父类作用域
    Son80::Base80::func(100);
}


int main80()
{
    cout << "080_类和对象-继承-同名静态成员处理" << endl;
    test80_1();
    cout << "----------------------------------------------------------------" << endl;

    test80_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
