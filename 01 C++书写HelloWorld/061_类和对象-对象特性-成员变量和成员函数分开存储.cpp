#include <iostream>
using namespace std;


//成员变量 和 成员函数 是 分开存储的
class Person61
{
};

class Person61_2
{
    int mA; //非静态成员变量，属于类的对象上

    static int mB; //静态成员变量，不属于类的对象上

    void func() {}; //非静态成员函数，不属于类的对象上

    static void func2() {}; //静态成员函数，不属于类的对象上
};

int Person61_2::mB = 0;

void test61_1()
{
    Person61 p;
    //空对象占用内存空间为：1
    //C++编译器会给每个空对象也分配 1 个字节的空间，是为了区分空对象在内存的位置
    //每个空对象也应该有一个独一无二的内存地址
    cout << "size of p(空对象) = " << sizeof(p) << endl;
}

void test61_2()
{
    Person61_2 p;
    cout << "size of p = " << sizeof(p) << endl;
}

int main61() {
    cout << "061-类和对象-对象特性-成员变量和成员函数分开存储" << endl;

    test61_1();
    cout << "----------------------------------------------------------------" << endl;

    test61_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}