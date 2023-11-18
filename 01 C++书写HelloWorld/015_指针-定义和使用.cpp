#include <iostream>
using namespace std;

int main15() {
    cout << "015_指针 - 定义和使用" << endl;
    int a = 10;
    int* p;
    p = &a;
    cout << "a的地址为：\t" << &a << endl;
    cout << "指针p为：\t" << p << endl;

    //可以通过 解引用 的方式来找到指针指向的内存中的数据，*p
    //修改内存中的值
    *p = 1000;
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
    cout << "----------------------------------------------------------------" << endl;

    cout << "指针p占用内存为：" << sizeof(p) << endl;
    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}
