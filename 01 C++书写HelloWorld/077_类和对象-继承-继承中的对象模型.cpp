#include <iostream>
using namespace std;


/*
继承中的对象模型
    父类中所有非静态成员属性都会被子类继承
    父类中私有成员属性 是被编译器给隐藏了，因此是访问不到的，但是确实被子类继承了


在windows的开始界面，打开 Developer Command Prompt for VS 2022 (开发人员命令提示符)。
跳转盘符,输入  e:
切换到要查看的类的文件所在目录，输输入   cd E:\Matrixtime\workfile\GitHub\myCpp\01 C++书写HelloWorl
输入下面的命令，查看 Son77 类的 布局（报告单个类的布局）
cl /d1 reportSingleClassLayoutSon77 077_类和对象-继承-继承中的 对象模型.cpp
*/


class Base77
{
public:
    int mA;
protected:
    int mB;
private:
    int mC;
};


class Son77 :public Base77
{
public:
    int mD;
};


void test77_1()
{
    // 占用 16 个字节
    cout << "size of Son77 = "<< sizeof(Son77) << endl;
}

int main77()
{
    cout << "077_类和对象-继承-继承中的对象模型" << endl;
    test77_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
