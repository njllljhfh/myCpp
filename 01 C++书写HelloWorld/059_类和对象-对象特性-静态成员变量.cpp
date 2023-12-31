#include <iostream>
using namespace std;


/*
静态成员就是在成员变量和成员函数前加上关键字 static，称为静态成员。

静态成员分为:
静态成员变量
    所有对象共享同一份数据
    在编译阶段分配内存
    类内声明，类外初始化

静态成员函数
    所有对象共享同一个函数
    静态成员函数只能访问静态成员变量
*/


//========================================= 静态成员变量 =========================================
class Person59
{
public:
    //1.所有对象共享同一份数据
    //2.在编译阶段分配内存
    //3.类内声明，类外初始化
    static int mA;

private:
    //静态成员变量也是有访问权限的
    static int mB;
};

int Person59::mA = 100;
int Person59::mB = 200;

void test59_1()
{
    Person59 p1;
    cout << "p1.mA = " << p1.mA << endl;
    cout << "*****************" << endl;

    Person59 p2;
    p2.mA = 200;
    cout << "p1.mA = " << p1.mA << endl;
    cout << "*****************" << endl;

}

void test59_2()
{
    //静态成员变量 不属于某个对象，所有对象都共享同一份数据
    //因此静态成员变量有两种访问方式
    //1、通过对象进行访问
    Person59 p1;
    cout << "p1.mA = " << p1.mA << endl;
    cout << "*****************" << endl;

    //2、通过类名进行访问
    cout << "Person59::mA = " << Person59::mA << endl;
    cout << "*****************" << endl;

    //cout << "Person59::mA = " << Person59::mB << endl; // 报错，类外访问不到私有的静态成员变量
}

int main59() {
    cout << "059_类和对象-对象特性-静态成员变量" << endl;
    //test59_1();
    //cout << "----------------------------------------------------------------" << endl;

    test59_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}