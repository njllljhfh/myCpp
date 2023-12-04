#include <iostream>
using namespace std;


class MyInteger71
{
    friend ostream& operator<<(ostream& cout, const MyInteger71& myint);

public:
    MyInteger71()
    {
        mNum = 0;
    }

    // 前置递减
    MyInteger71& operator--()
    {
        this->mNum--;
        return *this;
    }

    // 后置递减
    MyInteger71 operator--(int)
    {
        MyInteger71 temp = *this;
        mNum--;
        return temp;
    }

private:
    int mNum;
};

// 这里不加 const 的话，后置递增执行后，无法直接 调用 cout << myint--;  (原因不详：可能是编译器的问题)，见《040_引用-常量引用》
ostream& operator<<(ostream& cout, const MyInteger71& myint)
{
    cout << myint.mNum;
    return cout;
}

void test71_1()
{
    cout << "前置递减：" << endl;
    MyInteger71 myint;
    cout << myint << endl;
    cout << --(--myint) << endl;
    cout << myint << endl;
}


void test71_2()
{
    cout << "后置递减：" << endl;
    MyInteger71 myint;
    cout << myint << endl;
    cout << myint-- << endl;  // operator<< 函数 的参数 const MyInteger71& myint 不加 const 的话，这行代码报错
    cout << myint << endl;
}


int main71()
{
    cout << "071_类和对象-运算符重载-递减运算符-练习" << endl;
    test71_1();
    cout << "----------------------------------------------------------------" << endl;

    test71_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
