#include <iostream>
using namespace std;


//函数默认参数
// 注意：
//1、如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
int func41_1(int a, int b = 20, int c = 30)
{
    return a + b + c;
}


//2、如果函数声明有默认参数，函数的实现就不能有默认参数
int func41_2(int a = 10, int b = 10);
//这里不能有默认参数
int func41_2(int a, int b)
{
    return a + b;
}


//声明和实现，只能有一个有默认参数
int func41_3(int a, int b);
int func41_3(int a = 20, int b = 20)
{
    return a + b;
}


int main41() {
    cout << "041_函数高级-函数默认参数" << endl;

    cout << func41_1(10) << endl;
    cout << func41_1(10, 30) << endl;
    cout << "----------------------------------------------------------------" << endl;


    cout << func41_2() << endl;
    cout << "----------------------------------------------------------------" << endl;


    cout << func41_3() << endl;
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
