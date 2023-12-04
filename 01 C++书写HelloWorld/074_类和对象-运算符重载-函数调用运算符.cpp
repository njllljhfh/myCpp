#include <iostream>
#include <string>
using namespace std;


/*
函数调用运算符重载
    函数调用运算符 () 也可以重载
    由于重载后 便用的方式非常像函数的调用，因此称为 仿函数
    仿函数 没有固定写法，非常灵活
*/


class MyPrint74
{
public:
   //重载函数调用运算符
    void operator()(string test)
    {
        cout << test << endl;
    }
};

void test74_1()
{
    MyPrint74 myPrint;
    //由于使用起来非常类似于函数调用，因此称之为仿函数
    myPrint("hello world");
}


//仿函数 非常灵活，没有固定的写法
//加法类
class MyAdd74
{
public:
    int operator()(int a, int b) {
        return a + b;
    }
};


void test74_2()
{
    MyAdd74 myAdd;
    int res = myAdd(100, 200);
    cout << "res = " << res << endl;
    cout << "+++++++++++++++++++++++++++++++" << endl;


    //匿名对象，在下面这行代码中只用了匿名对象，匿名对象执行完后会内存会被立即释放
    cout << "匿名对象调用仿函数：" << endl;
    cout << MyAdd74()(1, 2) << endl;
}

int main74()
{
    cout << "074_类和对象-运算符重载-函数调用运算符" << endl;
    test74_1();
    cout << "----------------------------------------------------------------" << endl;

    test74_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
