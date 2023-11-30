#include <iostream>
#include <string>
using namespace std;


/*
构造函数调用规则
当创建一个类，默认情况下，c++编译器 至少给一个类添加3个函数
    1.默认构造函数（无参，函数体为空）
    2.默认析构函数（无参，函数体为空）
    3.默认拷贝构造函数，对属性进行值拷贝（浅拷贝）

构造函数调用规则如下:
	如果用户定义了有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
	如果用户定义了拷贝构造函数，c++不会再提供其他构造函数
*/

class Person55
{
public:
    Person55()
    {
        cout << "Person55 无参构造函数（默认构造函数）的调用" << endl;
    }

    Person55(int age)
    {
        cout << "Person55 有参构造函数的调用" << endl;
        mAge = age;
    }

    Person55(const Person55& p)
    {
        cout << "Person55 拷贝构造函数的调用" << endl;
        mAge = p.mAge;
    }

    ~Person55()
    {
        cout << "Person55 析构函数的调用" << endl;
    }

    int mAge;
};

void test55_1()
{
    Person55 p;
    p.mAge = 18;
    Person55 p2(p);
    cout << "P2 的年齡："<< p2.mAge << endl;
}

int main55() {
	cout << "055_类和对象-对象特性-构造函数调用规则" << endl;

    test55_1();
	cout << "----------------------------------------------------------------" << endl;

	//system("pause");
	cin.get();
	return 0;
} 