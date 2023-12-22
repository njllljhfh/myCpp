#include <iostream>
#include <string>
using namespace std;


/*
类模板对象做函数参数
一共有三种传入方式:
    1.指定传入的类型  ---   直接显示指定对象的据类型
    2.参数模板化      ---   将对象中的参数变为模板进行传递
    3.整个类模板化    ---   将这个对象类型模板化进行传递


总结：
    使用最多的是第一种方式
*/


template<class T1, class T2>
class Person103
{
public:
    T1 mName;
    T2 mAge;

    Person103(T1 name, T2 age)
    {
        this->mName = name;
        this->mAge = age;
    }

    void showPerson()
    {
        cout << "姓名：" << this->mName << " 年龄：" << this->mAge << endl;
    }
};


//1.指定传入的类型
void printPerson103_1(Person103<string, int>& p)
{
    p.showPerson();
}

void test103_1()
{
    Person103<string, int> p("孙悟空", 100);
    printPerson103_1(p);
}
//------------------------------------



//2.参数模板化（函数模板 配合 类模板）
template<class T1, class T2>
void printPerson103_2(Person103<T1, T2>& p)
{
    p.showPerson();
    //查看 T1 T2 的类型
    cout << "T1 的类型为：" << typeid(T1).name() << endl;
    cout << "T2 的类型为：" << typeid(T2).name() << endl;
}

void test103_2()
{
    Person103<string, int> p("猪八戒", 90);
    printPerson103_2(p);
}
//------------------------------------



//3.整个类模板化（函数模板 配合 类模板）
template<class T>
void printPerson103_3(T& p)
{
    p.showPerson();
    cout << "T 的类型为：" << typeid(T).name() << endl;
}

void test103_3()
{
    Person103<string, int> p("唐僧", 30);
    printPerson103_3(p);
}


int main103()
{
    cout << "103_模板-类模板对象做函数参数" << endl << "=======================================================" << endl;

    test103_1();
    cout << "---------------------------------------------------------------------------" << endl;

    test103_2();
    cout << "---------------------------------------------------------------------------" << endl;

    test103_3();
    cout << "---------------------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
