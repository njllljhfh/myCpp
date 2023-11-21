#include <iostream>
#include <string>
#include <thread>
using namespace std;


//栈区数据注意事项：不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放

int* func32(int b) //形参数据也会存放在栈区
{
    b = 100;
    int a = 10; //局部变量，存放在栈区，栈区的数据在函数执行完后启动释放 
    return &a; //返回局部变量的地址
    //return &b; //返回形参的地址
}

int main32() {
    cout << "032_程序的内存模型-栈区" << endl;

    int* p = func32(1);
    // 休眠1秒钟
    std::this_thread::sleep_for(std::chrono::seconds(1));

    cout << *p << endl; // 注意：这个数据不是10
    cout << "----------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
