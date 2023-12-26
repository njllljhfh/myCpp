#include <iostream>
using namespace std;


/*
普通函数与函数模板的调用规则如下:
    1、如果函数模板和普通函数都可以实现，优先调用普通函数
    2、可以通过空模板参数列表来强制调用函数模板
    3、函数模板也可以发生重载
    4、如果函数模板可以产生更好的匹配，优先调用函数模板


总结：既然提供了函数模板，最好不要再提供普通函数，否则容易出现二义性
*/


void myPrint98_1(int a, int b)
{
    cout << "调用普通函数 myPrint98_1(int a, int b)" << endl;
}


template<class T>
void myPrint98_1(T a, T b)
{
    cout << "调用函数模板 myPrint98_1(T a, T b)" << endl;
}


//函数模板也可以发生重载
template<class T>
void myPrint98_1(T a, T b, T c)
{
    cout << "调用函数模板 myPrint98_1(T a, T b, T c)" << endl;
}


void test98_1()
{
    //cout << "普通函数：" << endl;
    int a = 10;
    int b = 20;
    myPrint98_1(a, b);  // 1、如果函数模板和普通函数都可以实现，优先调用普通函数
}


void myPrint98_2(int a, int b);
//{
//    cout << "调用普通函数 myPrint98_2" << endl;
//}


template<class T>
void myPrint98_2(T a, T b)
{
    cout << "调用函数模板 myPrint98_2" << endl;
}


void test98_2()
{
    int a = 10;
    int b = 20;
    //myPrint98_2(a, b);  //报错，因为普通函数 myPrint98_2 只声明，没有实现。在链接阶段，报错，找不到函数的实现体。
    myPrint98_1<>(a, b); //2、可以通过空模板参数列表来强制调用函数模板
    cout << "***************************" << endl;


    myPrint98_1(a, b, 100); //3、函数模板也可以发生重载
    cout << "***************************" << endl;


    //4、如果函数模板可以产生更好的匹配，优先调用函数模板
    char c1 = 'a';
    char c2 = 'b';
    myPrint98_1(c1, c2); //注意编译器在这里没有调用普通函数！！！
}


int main98()
{
    cout << "098_模板-普通函数与函数模板的调用规则" << endl << "=======================================================" << endl;

    test98_1();
    cout << "----------------------------------------------------------------" << endl;

    test98_2();

    //system("pause");
    cin.get();
    return 0;
}

