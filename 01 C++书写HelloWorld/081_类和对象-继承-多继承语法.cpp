#include <iostream>
using namespace std;


/*
C++允许一个类继承多个类
    语法：class 子类 : 继承方式 父类1, 继承方式 父类2 ...
    多继承可能引发父类中有同名成员出现的问题，需要加作用域区分


实际开发中，不建议使用多继承！！！
*/


class Base81_1
{
public:
    int mA;
    Base81_1()
    {
        mA = 100;
    }
};


class Base81_2
{
public:
    int mA;
    Base81_2()
    {
        mA = 200;
    }
};


//多继承
class Son81 :public Base81_1, public Base81_2
{
public:
    int mC;
    int mD;
    Son81()
    {
        mC = 300;
        mD = 400;
    }
};


void test81_1()
{
    Son81 s;
    cout << "size of Son81 = " << sizeof(s) << endl;

    //当父类中出现同名成员，需要加父类作用域
    //cout << "mA = " << s.mA << endl;
    cout << "Base81_1::mA = " << s.Base81_1::mA << endl;
    cout << "Base81_2::mA = " << s.Base81_2::mA << endl;
}

int main81()
{
    cout << "081_类和对象-继承-多继承语法" << endl;
    test81_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
