#include <iostream>
using namespace std;


//函数重载的注意事项
//1、引用作为重载的条件
void func44_1(int& a)
{
    cout << "func44_1(int& a) 调用" << endl;
}

void func44_1(const int& a)
{
    cout << "func44_1(const int& a) 调用" << endl;
}


//2、函数重载碰到默认参数
//当函数重载碰到默认参数，会出现二义性，报错，要避免这种情况
void func44_2(int a, int b = 10)
{
    cout << "func44_2(int a, int b) 调用" << endl;
}

void func44_2(int a)
{
    cout << "func44_2(int a) 调用" << endl;
}

int main44() {
    cout << "044_函数高级-函数重载注意事项" << endl;

    cout << "引用作为重载的条件" << endl;
    int a = 10;
    func44_1(a);
    cout << "*************************" << endl;
    const int b = 20;
    func44_1(b);
    func44_1(30);
    cout << "----------------------------------------------------------------" << endl;

    cout << "函数重载碰到默认参数" << endl;
    //func44_2(10); //当函数重载碰到默认参数，会出现二义性，报错，要避免这种情况
    cout << "----------------------------------------------------------------" << endl;
    //system("pause");
    cin.get();
    return 0;
}
