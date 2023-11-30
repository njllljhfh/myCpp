#include <iostream>
using namespace std;


/*
浅拷贝：简单的复制拷贝操作
深拷贝：在堆区重新申请空间，进行拷贝操作



编译器自带的拷贝构造函数，执行的是浅拷贝操作
    可能引起 堆区 数据所在内存的重复释放问题。可以利用深拷贝来解决该问题。



总结：如果类属性有在堆区开辟的数据，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题。
*/

class Person56
{
public:
    Person56()
    {
        cout << "Person56 无参构造函数（默认构造函数）的调用" << endl;
    }

    Person56(int age, int height)
    {
        cout << "Person56 有参构造函数的调用" << endl;
        mAge = age;
        mHeight = new int(height); // 身高数据 在 堆区
    }

    Person56(const Person56& p)
    {
        cout << "Person56 拷贝构造函数的调用" << endl;
        mAge = p.mAge;
        //mHeight = p.mHeight; //对 mHeight 的拷贝，编译器默认实现就是这行代码，是浅拷贝
        // 自己实现 深拷贝操作
        mHeight = new int(*p.mHeight);
    }

    ~Person56()
    {
        //析构代码，将堆区开辟的数据做释放操作
        cout << "Person56 析构函数的调用" << endl;
        if (mHeight != NULL)
        {
            delete mHeight;
            mHeight = NULL;
        }
    }

    int mAge;
    int* mHeight;
};

void test56_1()
{
    Person56 p1(18, 160);
    cout << "P1 的年齡：" << p1.mAge << " ，P1 的年齡地址：" << &p1.mAge << " ，P1 的身高：" << *p1.mHeight << " ，P1 的身高地址：" << p1.mHeight << endl;

    Person56 p2(p1);
    cout << "P2 的年齡：" << p2.mAge << " ，P2 的年齡地址：" << &p2.mAge << " ，P2 的身高：" << *p2.mHeight << " ，P2 的身高地址：" << p2.mHeight << endl;
    cout << "*****************" << endl;
}

int main56() {
    cout << "056_类和对象-对象特性-深拷贝与浅拷贝" << endl;
    test56_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}