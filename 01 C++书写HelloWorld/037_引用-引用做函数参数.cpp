#include <iostream>
using namespace std;


//值传递
void mySwap371(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "mySwap371 a = " << a << endl;
    cout << "mySwap371 b = " << b << endl;
}

//地址传递
void mySwap372(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "mySwap371 a = " << *a << endl;
    cout << "mySwap371 b = " << *b << endl;
}

//引用传递
void mySwap373(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "mySwap371 a = " << a << endl;
    cout << "mySwap371 b = " << b << endl;
}

int main37() {
    cout << "037_引用-引用做函数参数" << endl;

    cout << "值传递：" << endl;
    int a = 10;
    int b = 20;
    mySwap371(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "----------------------------------------------------------------" << endl;

    cout << "地址传递：" << endl;
    a = 10;
    b = 20;
    mySwap372(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "----------------------------------------------------------------" << endl;

    cout << "地址传递：" << endl;
    a = 10;
    b = 20;
    mySwap373(a, b); //引用传递，函数内部对形参进行修改，函数外部的实参也会随之改变
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
