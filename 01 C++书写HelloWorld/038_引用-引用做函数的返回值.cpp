#include <iostream>
#include <thread>
using namespace std;


//1、不要返回局部变量的引用
int& test381()
{
    int a = 10;
    return a;
}

//2、函数的调用可以作为左值
int& test382()
{
    static int a = 10; //静态变量，存放在 全局区，全局区上的数据在程序结束后 系统释放
    return a;
}

int main38() {
    cout << "038_引用-引用做函数的返回值" << endl;

    cout << "不要返回局部变量的引用" << endl;
    int& ref = test381();
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    cout << "ref = " << ref << endl; // ref的值是错误的
    cout << "----------------------------------------------------------------" << endl;


    cout << "函数的调用可以作为左值" << endl;
    int& ref2 = test382();
    //std::this_thread::sleep_for(std::chrono::milliseconds(500));
    cout << "ref2 = " << ref2 << endl; //10

    //下面的赋值操作改变了 test382 函数中 a 的值
    test382() = 1000; //如果函数的返回值是引用，这个函数的调用可以作为左值
    cout << "ref2 = " << ref2 << endl; //1000
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
