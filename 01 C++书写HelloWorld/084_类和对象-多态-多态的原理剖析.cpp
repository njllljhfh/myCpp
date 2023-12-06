#include <iostream>
using namespace std;


//p136课
//https://www.bilibili.com/video/BV1et411b73Z/?p=136&spm_id_from=pageDriver&vd_source=d5456c77ecfc61e7372a8a02b7e73d29

/*
vfptr: virtual function pointor  虚函数（表）指针，指向 vftable


vftable: virtual function table   虚函数表
    表内记录虚函数的地址


用开发者提示工具，通过命令去查看相应的类的结构
cl /d1 reportSingleClassLayoutCat84 084_类和对象-多态-多态的原理剖析.cpp
*/

//动物
class Animal84
{
public:
    //虚函数
    virtual void speak()
    {
        cout << "动物 在说话" << endl;
    }
};


//猫
class Cat84 :public Animal84
{
public:
    //重写：子类的函数返回值类型 函数名 参数列表 与父类的函数完全相同
    // virtual 关键字写不写都可以
    virtual void speak()
    {
        cout << "小猫 在说话" << endl;
    }
};


//狗
class Dog84 :public Animal84
{
public:
    void speak()
    {
        cout << "小狗 在说话" << endl;
    }
};


//执行说话函数
void doSpeak84(Animal84& animal) // Animal83_2& animal = cat;
{
    //如果想执行让 猫 说话，那么这个函数地址就不能早绑定，需要在运行阶段进行绑定，即地址晚绑定
    animal.speak();
}

void test84_1()
{
    cout << "地址晚绑定：" << endl;
    Cat84 cat;
    doSpeak84(cat);
    cout << "++++++++++++++" << endl;

    Dog84 dog;
    doSpeak84(dog);
}

void test84_2()
{
    // speak 函数不加 virtual，Animal84 的大小为 1 个字节 (空类的大小)
    // speak 函数加 virtual，Animal84 的大小为 8 个字节（指针的大小就是8个字节）
    cout << "size of Animal84 = " << sizeof(Animal84) << endl;
}


int main84()
{
    cout << "084_类和对象-多态-多态的原理剖析" << endl << "=======================================================" << endl;
    test84_1();
    cout << "----------------------------------------------------------------" << endl;

    test84_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
