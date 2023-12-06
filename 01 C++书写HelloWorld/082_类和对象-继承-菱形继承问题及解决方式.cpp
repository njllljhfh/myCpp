#include <iostream>
using namespace std;


/*
菱形继承 概念:
    两个派生类继承同一个基类
    又有某个类同时继承这两个派生类
    这种继承被称为 菱形继承，或者 钻石继承


菱形继承 问题:
    1.羊继承了动物的数据，驼同样继承了动物的数据，当草泥马（羊驼）使用数据时，就会产生二义性,
    2.草泥马（羊驼）继承自动物的数据继承了两份，造成了资源浪费。其实我们清楚，这份数据我们只需要一份就可以。


解决方式：利用 虚继承 解决菱形继承的问题


名词解释
vbptr：虚基类指针（virtual base pointer）
vbptr 指向 vbtable（虚基类表）
*/



//动物类
class Animal82
{
public:
    int mAge;
};


// 利用虚继承 解决决菱形继承的问题
// 继承前 加上关键字 virtual 变为虚继承
// Animal82 类 称为 虚基类
//羊类
class Sheep82 :virtual public Animal82 {};

//驼类
class Tuo82 :virtual public Animal82 {};

//羊驼类
class SheepTuo82 :public Sheep82, public Tuo82 {};


void test82_1()
{
    SheepTuo82 st;
    st.Sheep82::mAge = 18;
    st.Tuo82::mAge = 28;

    //在菱形继承中，当两个父类拥有同名数据时，需要加作用域来区分
    cout << "st.Sheep82::mAge = " << st.Sheep82::mAge << endl;
    cout << "st.Tuo82::mAge = " << st.Tuo82::mAge << endl;
    cout << "+++++++++++++++++++++++++++++++++++" << endl;

    //这份数据（mAge），我们知道 只需要一份就可以，菱形继承导致数据有两份，资源浪费
    //利用 虚继承 解决菱形继承的问题
    //加了虚继承后 st.mAge 可以正常访问
    cout << "st.mAge = " << st.mAge << endl;
    //下面 3 个地址是一样的
    cout << &st.mAge << endl;
    cout << &st.Sheep82::mAge << endl;
    cout << &st.Tuo82::mAge << endl;
}

int main82()
{
    cout << "082_类和对象-继承-菱形继承问题及解决方式" << endl;
    test82_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
