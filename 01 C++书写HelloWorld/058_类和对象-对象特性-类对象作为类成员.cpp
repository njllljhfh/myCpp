#include <iostream>
#include <string>
using namespace std;


/*
当其他类对象作为本类成员，构造时候先构造成员的类对象，再构造自身。
析构的顺序与构造顺序相反。
*/

class Phone58
{
public:
    Phone58(string name)
    {
        cout << "手机 构造函数调用" << endl;
        pName = name;
    }
    //手机品牌名称
    string pName;

    ~Phone58()
    {
        cout << "手机 析构函数调用" << endl;
    }
};

class Person58
{
public:
    string mName;
    Phone58 mPhone;

    // Phone58 mPhone = pName  隐式转换法
    Person58(string name, string pName) : mName(name), mPhone(pName)
    {
        cout << "人 构造函数调用" << endl;
    }

    ~Person58()
    {
        cout << "人 析构函数调用" << endl;
    }
};

void test58_1()
{
    Person58 p1("张三", "苹果MAX");
    cout << p1.mName << " 拿着 " << p1.mPhone.pName << endl;

    cout << "*****************" << endl;
}

int main58() {
    cout << "058_类和对象-对象特性-类对象作为类成员" << endl;
    test58_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}