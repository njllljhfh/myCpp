#include <iostream>
#include <string>
#include <thread>
using namespace std;


int* func33()
{
    //利用 new 关键，字可以将数据开辟到堆区
    //指针 p 本质上也是 局部变量，放在栈上，指针保存的数据（指针指向的内存地址）放在堆区
    int* p = new int(10);
    return p;
}

int main33() {
    cout << "033_程序的内存模型-堆区" << endl;
    //在堆区开辟数据
    int* p = func33();

    // 休眠1秒钟
    std::this_thread::sleep_for(std::chrono::seconds(1));

    cout << *p << endl;
    // 至此，堆区的数据还没有释放

    cout << "----------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
