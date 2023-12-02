#include <iostream>
using namespace std;


/*
左移运算符：  <<

总结：重载左移运算符，配合友元可以实现输出自定义的类的数据。
*/


//左移运算符重载
class Person69
{
    friend ostream& operator<<(ostream& cout, Person69& p);

public:
    Person69(int a, int b)
    {
        mA = a;
        mB = b;
    }

    //不会利用成员函数来重载 左移运算符，因为无法实现 cout 在左侧的调用方式。
    //void operator<<(cout)
    //{
    //}

private:
    int mA;
    int mB;
};


//只能利用全局函数重载左移运算符
//本质 operator<<(cout, p);  简化版本 cout << p;
//ostream：输出流
ostream& operator<<(ostream& cout, Person69& p)
{
    cout << "mA = " << p.mA << ", mB = " << p.mB;
    return cout;
}

void test69_1()
{
    Person69 p(10, 20);
    cout << p << endl;
}

int main69()
{
    cout << "069_类和对象-运算符重载-左移运算符" << endl;
    test69_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
