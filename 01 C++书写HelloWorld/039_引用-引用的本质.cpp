#include <iostream>
using namespace std;


//c++内部发现是引用，转为 int* const ref = &a;
void func39(int& ref)
{
    ref = 100; //ref是应用，转为 *ref = 100
}

int main39() {
    cout << "039_引用-引用的本质" << endl;
    //引用的本质：在c++内部的实现是一个 指针常量

    int a = 10;

    //c++内部自动转换 int* const ref = &a; 指针常量的指针指向是不可修改的，也说明问什么引用不可更改
    int& ref = a;
    ref = 20; //c++内部发现 ref 是引用，自动帮我们转换为 *ref = 20;

    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;
    cout << "----------------------------------------------------------------" << endl;

    func39(a);
    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;
    cout << "----------------------------------------------------------------" << endl;

    //结论: C++推荐用引用技术，因为语法方便，引用本质是指针常量，但是所有的指针操作编译器都帮我们做了

    //system("pause");
    cin.get();
    return 0;
}
