#include <iostream>
using namespace std;


/*
C++中 空指针 也可以调用成员函数，但是也要注意有没有用到 this 指针
*/

class Person63
{
public:
    int mAge;

    void showClassName()
    {
        //没有用到 this 指针，所以此函数可以用 NULL 指针调用
        cout << "this is Person63 class" << endl;
    }

    void showPersonAge()
    {
        if (this == NULL)
        {
            // 解决 NULL 指针 报错的问题
            return;
        }
        //下面的代码相当于：cout << "age = " << this->mAge << endl;
        //无法用NULL指针访问 mAge
        cout << "age = " << mAge << endl;
    }
};


void test63_1()
{
    Person63* p = NULL;
    p->showClassName();
    p->showPersonAge();
}

int main63()
{
    cout << "063_类和对象-对象特性-空指针访问成员函数" << endl;
    test63_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}