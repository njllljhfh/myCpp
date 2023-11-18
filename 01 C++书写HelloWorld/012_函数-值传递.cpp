#include <iostream>
using namespace std;
#include <string>


void swap(int num1, int num2)
{
    cout << "交换前：" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "交换后：" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
}


int main12() {
    cout << "012_函数-值传递" << endl;

    int a = 10, b = 20;
    //值传递
    swap(a, b);
    //交换后 a, b 的值没有改变
    cout << "交换后：" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}