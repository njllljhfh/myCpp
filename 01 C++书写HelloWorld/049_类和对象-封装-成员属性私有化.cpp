#include <iostream>
#include <string>
using namespace std;


//成员属性设置为私有
//1、可以自己控制读写权限
//2、对于写可以检测数据的有效性

class Person49
{
private:
    //姓名（权限：可读可写）
    string mName;
    //年龄（权限：可读可写）
    int mAge;
    //情人（权限：只写）
    string mLover;

public:
    //设置姓名
    void setNmae(string name)
    {
        mName = name;
    }
    //获取姓名
    string getName()
    {
        return mName;
    }
    //获取年龄
    int getAge()
    {
        return mAge;
    }
    //设置年龄
    void setAge(int age)
    {
        if (age >= 0 && age <= 150)
        {
            mAge = age;
        }
        else
        {
            mAge = 0;
            cout << "请输入正确年龄，0-150岁" << endl;
        }
    }
    //设置情人
    void setLover(string lover)
    {
        mLover = lover;
    }
};

int main49() {
    cout << "049_类和对象-封装-成员属性私有化" << endl;
    Person49 p;
    p.setNmae("张三");
    cout << "姓名：" << p.getName() << endl;

    p.setAge(18);

    //p.mAge = 10; //报错
    cout << "年龄：" << p.getAge() << endl;

    p.setLover("李四");
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
