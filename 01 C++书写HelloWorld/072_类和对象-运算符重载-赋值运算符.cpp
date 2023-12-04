#include <iostream>
using namespace std;

/*
赋值运算符重载
C++ 编译器至少给一个类添加 4 个函数
    1.默认构造函数(无参，函数体为空)
    2.默认析构函数(无参，函数体为空)
    3.默认拷贝构造函数，对属性进行值拷贝
    4.赋值运算符 operator=，对属性进行值拷贝
*/

class Person72
{
public:
    int* mAge;

    Person72(int age)
    {
        mAge = new int(age);
    }

    Person72(const Person72& p)
    {
        cout << "Person72 拷贝构造函数" << endl;
        mAge = new int(*p.mAge);
    }

    ~Person72()
    {
        if (mAge != NULL)
        {
            delete mAge;
            mAge = NULL;
        }
    }

    //重载赋值运算符
    Person72& operator=(Person72& p)
    {
        //编译器默认提供的 赋值运算符 是浅拷贝
        //mAge = p.mAge;
        //-------------------------------


        //自己实现深拷贝
        //应该先判断是否有属性在堆区，如果有，先释放干净，然后再进行深拷贝
        if (mAge != NULL)
        {
            delete mAge;
            mAge = NULL;
        }
        //深拷贝
        mAge = new int(*p.mAge);

        //返回对象本身
        return *this;
    }
};

void test72_1()
{
    Person72 p1(18);
    cout << "p1.mAge = " << *p1.mAge << endl;
    Person72 p2(20);
    cout << "p2.mAge = " << *p2.mAge << endl;
    cout << "+++++++++++++++++++++++++++++++" << endl;


    p2 = p1;
    cout << "p1.mAge = " << *p1.mAge << endl;
    cout << "p2.mAge = " << *p2.mAge << endl;
}

void test72_2()
{
    //内置类型连续赋值操作
    int a = 10;
    int b = 20;
    int c = 30;
    c = b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "+++++++++++++++++++++++++++++++" << endl;


    Person72 p1(18);
    Person72 p2(20);
    Person72 p3(30);
    p3 = p2 = p1;
    cout << "p1.mAge = " << *p1.mAge << endl;
    cout << "p2.mAge = " << *p2.mAge << endl;
    cout << "p3.mAge = " << *p3.mAge << endl;
}

int main72()
{
    cout << "072_类和对象-运算符重载-赋值运算符" << endl;
    test72_1();
    cout << "----------------------------------------------------------------" << endl;

    test72_2();
    cout << "----------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
