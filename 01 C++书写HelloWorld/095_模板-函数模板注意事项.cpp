#include <iostream>
using namespace std;


/*
函数模板注意事项
    1、自动类型推导，必须推导出一致的数据类型 T 才可以使用
    2、模板必须要确定出 T 的数据类型，才可以使用
*/


//1、自动类型推导，必须推导出一致的数据类型 T 才可以使用
template<class T> //typename 关键字可以替换为 class
void mySwap95(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}


//2、函数模板必须要确定出 T 的数据类型，才可以使用
template<class T>
void func95()
{
    cout << "func95 调用" << endl;
}


void test95_1()
{
    int a = 10;
    int b = 20;
    mySwap95(a, b);  //正确

    char c = 'c';
    //mySwap95(a, c);  //错误！推导不出一致的 T 类型

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "**************************" << endl;
}


void test95_2()
{
    //虽然函数模板 func95 的函数体内没有使用 T 类型，但是在调用该函数时，一样要确定 T 的类型才可以，否则会报错
    //func95(); //错误
    func95<int>(); 
}

int main95()
{
    cout << "095_模板-函数模板注意事项" << endl << "=======================================================" << endl;

    test95_1();
    cout << "----------------------------------------------------------------" << endl;

    test95_2();

    //system("pause");
    cin.get();
    return 0;
}
