#include <iostream>
using namespace std;


//函数重载的作用：函数名可以相同，提高复用性
//函数重载满足条件：
//1、同一个作用域下
//2、函数名称相同
//3、函数参数  类型不同 或者 个数不同 或者 顺序不同
void func43_1()
{
    cout << "func43_1 的调用" << endl;
}

void func43_1(int a)
{
    cout << "func43_1(int a) 的调用" << endl;
}

void func43_1(double a)
{
    cout << "func43_1(double a) 的调用" << endl;
}

void func43_1(int a, double b)
{
    cout << "func43_1(int a, double b) 的调用" << endl;
}

void func43_1(double a, int b)
{
    cout << "func43_1(double a, int b) 的调用" << endl;
}


//注意：函数的返回值不可以作为函数重载的条件
//int func43_1(int a)
//{
//    return a;
//}

int main43() {
    cout << "043_函数高级-函数重载" << endl;

    func43_1();
    cout << "----------------------------------------------------------------" << endl;

    func43_1(10);
    cout << "----------------------------------------------------------------" << endl;

    func43_1(3.14);
    cout << "----------------------------------------------------------------" << endl;

    func43_1(10, 3.14);
    cout << "----------------------------------------------------------------" << endl;

    func43_1(3.14, 10);
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
