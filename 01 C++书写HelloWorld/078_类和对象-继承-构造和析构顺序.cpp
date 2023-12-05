#include <iostream>
using namespace std;


/*
继承中构造和析构的顺序
    先调用父类构造函数，再调用子类构造函数，析构的顺序与构造顺序相反。
*/


class Base78
{
public:
    Base78()
    {
        cout << "Base78 构造函数" << endl;
    }

    ~Base78()
    {
        cout << "Base78 析构函数" << endl;
    }
};


class Son78 :public Base78
{
public:
    Son78()
    {
        cout << "Son78 构造函数" << endl;
    }

    ~Son78()
    {
        cout << "Son78 析构函数" << endl;
    }

};

void test78_1()
{
    /*
    Base78 构造函数
    Son78 构造函数
    Son78 析构函数
    Base78 析构函数
    */
    Son78 s;
}

int main78()
{
    cout << "078_类和对象-继承-构造和析构顺序" << endl;
    test78_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
