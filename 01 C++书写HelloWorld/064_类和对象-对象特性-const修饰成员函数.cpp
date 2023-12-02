#include <iostream>
using namespace std;


/*
const 修饰成员函数
常函数:
    成员函数后加 const 后，我们称为这个函数为常函数
    常函数内不可以修改成员属性
    成员属性声明时加关键字 mutable 后，在常函数中依然可以修改

常对象:
    声明对象前加 const 称该对象为常对象
    常对象只能调用常函数
*/


//常函数
class Person64
{
public:
    int mA;
    mutable int mB; //特殊变量，即使在常函数中，也可以修改这个值（加 mutable 关键字）

    //this指针的本质 是 指针常量，this指针 相当于是 Person64* const this;（指针的指向 不可以修改，指针指向的值 可以修改）
    //在函数后面加上const后（常函数），this指针 相当于是 const Person64* const this;（指针的指向 和 指针指向的值 都不可以修改）
    void showPerson() const
    {
        //this->mA = 100;
        //this = NULL; //this指针 不可以修改指针的指向
        //---------------------

        this->mB = 100;
    }

    void func()
    {

    }
};

void test64_1()
{
    cout << "========== test64_1 ==========" << endl;
    Person64 p;
    p.showPerson();
    cout << "p.mb = " << p.mB << endl;
    p.mB = 200;
    cout << "p.mb = " << p.mB << endl;

    Person64 p2;
    p2.mB = 2;
    cout << "p2.mb = " << p2.mB << endl;
    cout << "p.mb = " << p.mB << endl;
}

//常对象
void test64_2()
{
    cout << "========== test64_2 ==========" << endl;
    //在对象前加 const，变为 常对象
    const Person64 p;
    //p.mA = 100;  //常对象不可以修改普通的成员变量
    p.mB = 3;  //常对象可以修改 mutable 修饰的特殊变量
    cout << "p.mb = " << p.mB << endl;

    //常对象 只能调用 常函数
    p.showPerson();
    cout << "p.mb = " << p.mB << endl;
    //p.func(); // 报错
}

int main64()
{
    cout << "064_类和对象-对象特性-const修饰成员函数" << endl;
    test64_1();
    cout << "----------------------------------------------------------------" << endl;

    test64_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}