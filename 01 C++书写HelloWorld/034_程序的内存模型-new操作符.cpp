#include <iostream>
#include <string>
#include <thread>
using namespace std;


//1、new 的基本语法
int* func34()
{
    //在堆区创建整型数据
    int* p = new int(10);
    return p;
}

void test341()
{
    int* p = func34();
    cout << *p << endl;
    //堆区的数据由程序员管理开辟，由程序员管理释放
    //如果想释放堆区数据，利用关键字 delete
    delete p;  //释放p的内存
    //cout << *p << endl; //内存已经释放了，再次访问会报错: 读取访问权限冲突。
}

//2、在堆区利用 new 开辟数组
void test342()
{
    //创建10个整型数据的数组，再堆区
    int* arr = new int[10]; //10代表数组有10个元素
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    //释放堆区的数组
    //释放数组时，要加[]才可以
    delete[] arr;
}

int main34() {
    cout << "034_程序的内存模型-new操作符" << endl;

    //1、new 的基本语法
    test341();

    cout << "----------------------------------------------------------------" << endl;

    //2、在堆区利用 new 开辟数组
    test342();
    cout << "----------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
