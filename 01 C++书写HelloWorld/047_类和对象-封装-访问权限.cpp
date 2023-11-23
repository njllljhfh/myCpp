#include <iostream>
#include <string>
using namespace std;


//访问权限
//三种：
//公共权限 public       成员 类内可以访问，类外也可以访问
//保护权限 protected    成员 类内可以访问，类外不可以访问，子类可以访问
//私有权限 private      成员 类内可以访问，类外不可以访问，子类不可以访问

class Person47
{
public:
    string m_Name;

protected:
    string m_Car;

private:
    int m_Password;

public:
    void func()
    {
        m_Name = "张三";
        m_Car = "拖拉机";
        m_Password = 123456;
    }
};

int main47() {
    cout << "047_类和对象-封装-访问权限" << endl;

    Person47 p1;
    p1.m_Name = "李四";
    //p1.m_Car = "奔驰";  //保护权限的内容，在类外不可以访问
    //p1.m_Password = "奔驰";  //私有权限的内容，在类外不可以访问
    p1.func();
    cout << "姓名：" << p1.m_Name << endl;
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
