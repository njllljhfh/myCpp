#include <iostream>
using namespace std;


/*
纯虚函数和抽象类
在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容
因此可以将 虚函数 改为 纯虚函数
纯虚函数语法: virtua1 返回值类型 函数名（参数列表）= 0;


当类中有了纯虚函数，这个类也称为 抽象类


抽象类特点:
    无法实例化对象
    子类必须重写抽象类中的纯虚函数，否则也属于抽象类
*/


//抽象类
class Base86
{
public:
    //纯虚函数
    //只要有一个纯虚函数，这个类称为 抽象类
    //1、抽象类无法实例化对象
    //2、抽象类的子类必须重写抽象类中的纯虚函数，否则也属于抽象类，无法实例化对象
    virtual void func() = 0;
};


class Son86 :public Base86
{
public:
    virtual void func() 
    {
        cout << "Son86 func 函数调用" << endl;
    }
};


void test86_1()
{
    //Base86 b; //抽象类无法实例化对象
    //new Base86; //抽象类无法实例化对象

    Base86* base = new Son86;
    base->func();
    delete base;
    cout << "++++++++++++++" << endl;
}

int main86()
{
    cout << "086_类和对象-多态-纯虚函数和抽象类" << endl << "=======================================================" << endl;
    test86_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
