#include <iostream>
using namespace std;


/*
普通函数与函数模板区别:
    普通函数调用时可以发生自动类型转换(隐式类型转换)
    函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
    如果利用显示指定类型的方式，可以发生隐式类型转换


总结：建议使用显示指定类型的方式，调用函数模板，因为可以自己确定通用类型 T
*/


//普通函数
int myAdd97_1(int a, int b)
{
    return a + b;
}


//函数模板
template<class T>
T myAdd97_2(T a, T b)
{
    return a + b;
}


void test97_1()
{
    cout << "普通函数：" << endl;
    int a = 10;
    int b = 20;
    cout << myAdd97_1(a,b) << endl;
    cout << "***************************"<< endl;

    //下面的函数调用，发生了隐式类型转换
    char c = 'c'; //字符 c 的ASKII码为 99
    cout << myAdd97_1(a,c) << endl;
}


void test97_2()
{
    cout << "函数模板：" << endl;
    int a = 10;
    int b = 20;
    char c = 'c'; //字符 c 的ASKII码为 99
    // 自动类型推导
    cout << myAdd97_2(a, b) << endl; 
    //cout << myAdd97_2(a, c) << endl; //这里会报错：因为自动类型推导，不会发生隐式类型转换
    cout << "***************************" << endl;

    //显示指定类型，可以发生隐式类型转换
    cout << myAdd97_2<int>(a, c) << endl; 
    cout << "***************************" << endl;
}


int main97()
{
    cout << "097_模板-普通函数与函数模板区别" << endl << "=======================================================" << endl;

    test97_1();
    cout << "----------------------------------------------------------------" << endl;

    test97_2();

    //system("pause");
    cin.get();
    return 0;
}
