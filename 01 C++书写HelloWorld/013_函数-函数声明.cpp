#include <iostream>
using namespace std;
#include <string>

//函数声明：提前告诉编译器，函数的存在
//函数声明可以写多次，但是函数定义只能有一次
int max(int a, int b);
//int max(int a, int b);  //不会报错

int main13() {
    cout << "013_函数-函数声明" << endl;

    int a = 10, b = 20;
    //值传递
    cout << max(a, b) << endl;
    //交换后 a, b 的值没有改变
    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}

int max(int a, int b)
{
    return a > b ? a : b;
}