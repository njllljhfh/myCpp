#include <iostream>
using namespace std;


/*
this指针 指向 调用成员函数的对象
this指针 是隐含在每一个 非静态成员函数 内的一种指针
*/

class Person62
{
public:
    int age;

    Person62(int age)
    {
        // this指针 指向 调用成员函数的对象
        this->age = age;
    }

    Person62& PersonAddAge(Person62& p)
    {
        this->age += p.age;
        //返回对象本身用* this
        //this是指向对象的指针，而 *this 指向的就是对象本体
        return *this;
    }

    Person62 PersonAddAge_2(Person62& p)  // 注意！！！ 这里返回的是值（调用了类的拷贝构造函数）
    {
        this->age += p.age;
        return *this;
    }

};

//1、解决名称冲突
void test62_1()
{
    Person62 p1(18);
    cout << "p1 的年龄为：" << p1.age << endl;
}

//2、返回对象本身用 *this
void test62_2()
{
    Person62 p1(10);
    cout << "p1 的年龄为：" << p1.age << endl;
    cout << "*******************" << endl;

    Person62 p2(10);
    //链式编程思想（返回的是对象的引用）
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    cout << "p2 的年龄为：" << p2.age << endl;
    cout << "*******************" << endl;

    Person62 p3(10);
    //返回的是对象的值（调用了类的拷贝构造函数）
    p3.PersonAddAge_2(p1).PersonAddAge_2(p1).PersonAddAge_2(p1);
    cout << "p3 的年龄为：" << p3.age << endl;
}


int main()
{
    cout << "062_类和对象-对象特性-this指针的用途" << endl;
    test62_1();
    cout << "----------------------------------------------------------------" << endl;

    test62_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}