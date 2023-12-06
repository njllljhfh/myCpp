#include <iostream>
using namespace std;


/*
多态的基本概念
多态是C++面向对象三大特性之一
多态分为两类
    静态多态: 函数重载 和 运算符重载属于静态多态，复用函数名
    动态多态: 派生类 和 虚函数实现运行时多态

静态多态和动态多态区别:
    静态多态的函数地址早绑定  编译阶段确定函数地址
    动态多态的函数地址晚绑定  运行阶段确定函数地址
*/


//动物
class Animal83_1
{
public:
    void speak()
    {
        cout << "动物 在说话" << endl;
    }
};


//猫
class Cat83_1 :public Animal83_1
{
public:
    void speak()
    {
        cout << "小猫 在说话" << endl;
    }
};


//执行说话函数
void doSpeak83_1(Animal83_1& animal) // Animal83_1& animal = cat;
{
    //地址早绑定，在编译阶段就确定了函数地址（执行结果：动物 在说话）
    animal.speak();
}

void test83_1()
{
    cout << "地址早绑定：" << endl;
    Cat83_1 cat;
    doSpeak83_1(cat);
}
//------------------------------------------------------------------------------------------------


/*
动态多态的满足条件
    1、有继承关系
    2、子类 要重写 父类的虚函数


动态多态使用
    父类的指针或引用 指向子类对象
*/

//动物
class Animal83_2
{
public:
    //虚函数
    virtual void speak()
    {
        cout << "动物 在说话" << endl;
    }
};


//猫
class Cat83_2 :public Animal83_2
{
public:
    //重写：子类的函数返回值类型 函数名 参数列表 与父类的函数完全相同
    // virtual 关键字写不写都可以
    void speak()
    {
        cout << "小猫 在说话" << endl;
    }
};


//狗
class Dog83_2 :public Animal83_2
{
public:
    virtual void speak()
    {
        cout << "小狗 在说话" << endl;
    }
};


//执行说话函数
void doSpeak83_2(Animal83_2& animal) // Animal83_2& animal = cat;
{
    //如果想执行让 猫 说话，那么这个函数地址就不能早绑定，需要在运行阶段进行绑定，即地址晚绑定
    animal.speak();
}

void test83_2()
{
    cout << "地址晚绑定：" << endl;
    Cat83_2 cat;
    doSpeak83_2(cat);
    cout << "++++++++++++++" << endl;

    Dog83_2 dog;
    doSpeak83_2(dog);
}


int main83()
{
    cout << "083_类和对象-多态-多态的基本用法" << endl << "=======================================================" << endl;
    test83_1();
    cout << "----------------------------------------------------------------" << endl;

    test83_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
