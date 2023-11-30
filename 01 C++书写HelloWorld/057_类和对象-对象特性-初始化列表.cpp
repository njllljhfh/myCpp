#include <iostream>
using namespace std;


class Person57
{
public:
    //传统初始化操作
    //Person57(int a, int b, int c)
    //{
    //    mA = a;
    //    mB = b;
    //    mC = c;
    //}

    //初始化列表，初始化属性
    Person57() :mA(40), mB(50), mC(60)
    {
    }

    Person57(int a, int b, int c) :mA(a), mB(b), mC(c)
    {
    }

    int mA;
    int mB;
    int mC;
};

void test57_1()
{
    Person57 p1(10, 20, 30);
    cout << "p1.mA = " << p1.mA << endl;
    cout << "p1.mB = " << p1.mB << endl;
    cout << "p1.mC = " << p1.mC << endl;
    cout << "*****************" << endl;

    Person57 p2;
    cout << "p2.mA = " << p2.mA << endl;
    cout << "p2.mB = " << p2.mB << endl;
    cout << "p2.mC = " << p2.mC << endl;
    cout << "*****************" << endl;
}

int main57() {
    cout << "057_类和对象-对象特性-初始化列表" << endl;
    test57_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}