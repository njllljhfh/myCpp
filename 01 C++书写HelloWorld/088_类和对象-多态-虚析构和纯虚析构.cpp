#include <iostream>
#include <string>
using namespace std;


/*
虚析构 和 纯虚析构
多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码


解决方式: 将父类中的 析构函数 改为 虚析构 或者 纯虚析构


虚析构 和 纯虚析构共性:
    可以解决父类指针释放子类对象
    都需要有具体的函数实现


虚析构和纯虚析构区别:
    如果是纯虚析构，该类属于抽象类，无法实例化对象


虚析构语法:
virtual ~类名(){}


纯虚析构语法:
virtual ~类名() = 0;             声明语法
类名::~类名(){}                  实现语法

--------------------------------------------------------------------------------


总结:
    1.虚析构 或 纯虚析构 就是用来解决通过父类指针释放子类对象
    2.如果子类中没有 堆区 数据，可以不写 虚析构 或 纯虚析构
    3.拥有 纯虚析构函数 的类也属于 抽象类
*/


class Animal88
{
public:
    //纯虚函数
    virtual void speak() = 0;

    Animal88()
    {
        cout << "Animal88 构造函数 调用" << endl;
    }

    //虚析构：利用虚析构可以解决父类指针释放时不调用子类析构函数的问题。
    //virtual ~Animal88()
    //{
    //    cout << "Animal88 虚析构函数调用" << endl;
    //}

    //纯虚析构：需要声明，也需要实现
    //只要有了纯虚析构函数，这个类也属于抽象类，无法实例化对象
    virtual ~Animal88() = 0;
};


Animal88::~Animal88()
{
    cout << "Animal88 纯虚析构函数 调用" << endl;
}


class Cat88 : public Animal88
{
public:
    string* mName;

    Cat88(string name)
    {
        cout << "Cat88 构造函数 调用" << endl;
        mName = new string(name);
    }

    ~Cat88()
    {
        if (mName != NULL)
        {
            cout << "Cat88 析构函数 调用" << endl;
            delete mName;
            mName = NULL;
        }
    }

    virtual void speak()
    {
        cout << *mName <<"小猫 在说话" << endl;
    }
};

void test88_1()
{
    Animal88* animal = new Cat88("Tom");
    animal->speak();
    //父类指针 在 析构时候 不会调用子类中的 析构函数，导致子类如果有堆区属性在析构函数中释放，出现内存泄漏问题。
    delete animal;
    //cout << "+++++++++++++++++++++++++" << endl;
}

int main88()
{
    cout << "088_类和对象-多态-虚析构和纯虚析构" << endl << "=======================================================" << endl;
    test88_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
