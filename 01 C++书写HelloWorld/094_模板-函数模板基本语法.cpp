#include <iostream>
using namespace std;


/*
函数模板
    函数模板利用关键字 template
    使用函数模板有两种方式：自动类型推到、显式指定类型
    模板的目的是为了提高复用性，将类型参数化
*/


//声明一个模板，告诉编译器后面代码中紧跟着的 T 不要报错，T 是一个通用数据类型
//typename 关键字可以替换为 class
//template<class T>
template<typename T>
void mySwap(T& a, T& b)
{
    //交换
    T temp = a;
    a = b;
    b = temp;
}

void test94_1()
{

    //利用函数模板交换变量
    //函数模板的使用方式有两种:
    //1、自动类型推到
    int a = 10;
    int b = 20;
    mySwap(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "**************************" << endl;

    //2、显式的指定类型
    int c = 30;
    int d = 40;
    mySwap<int>(c, d);
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
}

int main()
{
    cout << "094_模板-函数模板基本语法" << endl << "=======================================================" << endl;
    test94_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
