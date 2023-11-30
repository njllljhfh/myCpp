#include <iostream>
#include <string>
using namespace std;


//拷贝构造函数调用时机
class Person54
{
public:
    Person54()
    {
        cout << "Person54 无参构造函数（默认构造函数）的调用" << endl;
    }

    Person54(int age)
    {
        cout << "Person54 有参构造函数的调用" << endl;
        mAge = age;
    }

    Person54(const Person54& p)
    {
        cout << "Person54 拷贝构造函数的调用" << endl;
        mAge = p.mAge;
        mName = p.mName;
    }

    ~Person54()
    {
        cout << "Person54 析构函数的调用" << "  " << mName << endl;
    }

    int mAge;
    string mName;

};

//1、使用一个已经创建完毕的对象来初始化一个新对象
void test54_1()
{
    Person54 p1(20);
    Person54 p2(p1); // 拷贝构造函数，最常用的一种调用时机
    cout << "p2 的年龄：" << p2.mAge << endl;
    cout << "*****************" << endl;
}
//--------------------------------------------------------------------------------------------------------------------


//2、值传递的方式给函数参数传值
void doWork54_2(Person54 p)
{
    p.mAge = 200;
}

void test54_2()
{
    Person54 p3;
    p3.mAge = 3;
    doWork54_2(p3);  // 值传递的方式给函数参数传值，会调用 拷贝构造函数
    cout << "p3 的年龄：" << p3.mAge << endl;
    cout << "*****************" << endl;
}
//--------------------------------------------------------------------------------------------------------------------


//3、值方式返回局部变量
Person54 dowork54_3()
{
    Person54 p4;
    p4.mAge = 4;
    p4.mName = "p4";
    cout << "p4 的地址：" << &p4 << endl;

    //这里本应该返回 p4 的拷贝
    //但是，这里编译器发生了 “返回值优化”（Return Value Optimization，简称RVO）
    //RVO 是一种编译器优化技术，它试图优化函数返回一个局部对象的情况，避免进行不必要的拷贝操作，直接将局部对象的值放在函数调用方的对象中。
    //导致 p4 和 p5 的地址是一样的，即 是同一个对象
    //return p4;

    return Person54(p4); // 这样可以返回 拷贝数据，本节课期望的是这样的结果
}

void test54_3()
{
    Person54 p5 = dowork54_3();
    p5.mName = "p5";
    cout << "p5 的地址：" << &p5 << endl;
    cout << "p5 的年龄：" << p5.mAge << endl;
    cout << "*****************" << endl;
}


//下面这种 指针的方式， p5 和 p4 指向的是相同的地址
//Person54* dowork54_3()
//{
//    Person54* p4 = new Person54;
//    p4->mAge = 4;
//    cout << "dowork54_3  p4 的地址：" << p4 << endl;
//    return p4;
//}
//
//void test54_3()
//{
//    Person54* p5 = dowork54_3();
//    cout << "test54_3  p5 的地址：" << p5 << endl;
//    cout << "p5 的年龄：" << p5->mAge << endl;
//    cout << "*****************" << endl;
//
//    // 注意：使用指针时需要手动释放内存
//    delete p5;
//}

int main54() {
    cout << "054_类和对象-对象特性-拷贝构造函数调用时机" << endl;


    cout << "1.使用一个已经创建完毕的对象来初始化一个新对象" << endl;
    test54_1();
    cout << "----------------------------------------------------------------" << endl;


    cout << "2.值传递的方式给函数参数传值" << endl;
    test54_2();
    cout << "----------------------------------------------------------------" << endl;


    cout << "3.值方式返回局部变量" << endl;
    test54_3();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
