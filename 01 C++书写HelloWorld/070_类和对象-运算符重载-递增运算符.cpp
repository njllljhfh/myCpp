#include <iostream>
using namespace std;


/*
递增运算符: ++


前置递增定义
MyInteger70& operator++();

后置递增定义
MyInteger70 operator++(int);


前置递增返回的是引用，后置递增返回的是值
*/

//重载递增运算符

//自定义整形
class MyInteger70
{
    friend ostream& operator<<(ostream& cout, const MyInteger70& myint);

public:
    MyInteger70()
    {
        mNum = 0;
    }

    //重载前置 ++ 运算符
    //链式调用
    MyInteger70& operator++()
    {
        mNum++;
        return *this;
    }

    //重载后置 ++ 运算符
    // MyInteger70 operator++(int)， 这个int代表的是 占位参数，可以用于区分前置和后置递增
    MyInteger70 operator++(int)
    {
        //先记录当递增前的数据
        MyInteger70 temp = *this;

        //然后递增
        mNum++;

        //最后将记录的递增前的数据返回
        return temp;
    }

private:
    int mNum;
};

//利用全局函数重载 << 运算符
// 这里不加 const 的话，后置递增执行后，无法直接 调用 cout << myint++;  (原因不详：可能是编译器的问题)，见《040_引用-常量引用》
ostream& operator<<(ostream& cout, const MyInteger70& myint)
{
    cout << myint.mNum;
    return cout;
}


void test70_1()
{
    cout << "前置递增：" << endl;
    MyInteger70 myint;
    cout << myint << endl;
    cout << ++(++myint) << endl;
    cout << myint << endl;
}


void test70_2()
{
    cout << "后置递增：" << endl;
    MyInteger70 myint;
    cout << myint << endl;
    cout << myint++ << endl;
    cout << myint << endl;
}


int main70()
{
    cout << "070_类和对象-运算符重载-递增运算符" << endl;
    test70_1();
    cout << "----------------------------------------------------------------" << endl;

    test70_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
