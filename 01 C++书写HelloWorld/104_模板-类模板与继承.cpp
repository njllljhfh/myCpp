#include <iostream>
#include <string>
using namespace std;


/*
当类模板碰到继承时，需要注意以下几点:
    当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中 T 的类型
    如果不指定，编译器无法给子类分配内存
    如果想灵活指定出父类中 T 的类型，子类也需变为类模板


总结：
    如果父类是类模板，子类需要指定出父类中 T 的数据类型
*/


template<class T>
class Base104
{
public:
    T m;
};


//class Son104 :public Base104  //错误，必须要知道父类中的 T 类型，才能继承给子类
class Son104_1 : public Base104<int>
{

};


void test104_1()
{
    Son104_1 s1;
    s1.m = 10;
    cout << "m = " << s1.m << endl;
}
//------------------------------------------------------



//如果想灵活指定出父类中 T 的类型，子类也需变为类模板
template<class T1, class T2>
class Son104_2 : public Base104<T2>
{
public:
    T1 obj;
    Son104_2()
    {
        cout << "T1 的类型为：" << typeid(T1).name() << endl;
        cout << "T2 的类型为：" << typeid(T2).name() << endl;
    }
};


void test104_2()
{
    Son104_2<int,char> s2;
    s2.obj = 2;
    s2.m = 'b';
}


int main()
{
    cout << "104_模板-类模板与继承" << endl << "=======================================================" << endl;

    test104_1();
    cout << "---------------------------------------------------------------------------" << endl;

    test104_2();
    cout << "---------------------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}

