#include <iostream>
using namespace std;


/*
继承方式一共有三种：
    公共继承
    保护继承
    私有继承
*/


//公共继承
class Base76_1
{
public:
    int mA;
protected:
    int mB;
private:
    int mC;
};


class Son75_1 : public Base76_1
{
    void func()
    {
        mA = 10; //父类中的公共权限成员 到子类中依然是 公共权限
        mB = 10; //父类中的保护权限成员 到子类中依然是 保护权限
        //mC = 10; //父类中的私有权限成员 子类访问不到
    }
};


void test76_1()
{
    Son75_1 s1;
    s1.mA = 100;
    //s1.mB = 100; //保护权限成员 类外不可访问
}
//---------------------------------------------------------------


//保护继承
class Base76_2
{
public:
    int mA;
protected:
    int mB;
private:
    int mC;
};

class Son75_2 : protected Base76_2
{
    void func()
    {
        mA = 10; //父类中的公共权限成员 到子类中变为 保护权限
        mB = 10; //父类中的保护权限成员 到子类中依然是 保护权限
        //mC = 10; //父类中的私有权限成员 子类访问不到
    }
};

void test76_2()
{
    Son75_2 s2;
    //s2.mA = 100; //在类 Son75_2 中 mA 变为保护权限成员 类外不可访问
    //s2.mB = 100; //保护权限成员 类外不可访问
}
//---------------------------------------------------------------


//私有继承
class Base76_3
{
public:
    int mA;
protected:
    int mB;
private:
    int mC;
};

class Son75_3 : private Base76_3
{
    void func()
    {
        mA = 10; //父类中的公共权限成员 到子类中变为 私有权限
        mB = 10; //父类中的保护权限成员 到子类中依然是 私有权限
        //mC = 10; //父类中的私有权限成员 子类访问不到
    }
};

class GrandSon75_3 : public Son75_3
{
public:
    void func()
    {
        //mA = 1000; // 类Son75_3 中 mA 为私有权限
        //mB = 1000; // 类Son75_3 中 mB 为私有权限
    }
};


void test76_3()
{
    Son75_3 s3;
    //s3.mA = 100; //在类 Son75_3 中 mA 变为私有权限成员 类外不可访问
    //s3.mB = 100; //在类 Son75_3 中 mA 变为私有权限成员 类外不可访问
}


int main()
{
    cout << "076_类和对象-继承-继承方式" << endl;
    test76_1();
    cout << "----------------------------------------------------------------" << endl;

    test76_2();
    cout << "----------------------------------------------------------------" << endl;

    test76_3();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}

