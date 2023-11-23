#include <iostream>
using namespace std;


//C++中函数的形参列表里可以有站位参数，用来做站位，调用函数时必须填补该位置
//目前学习阶段，占位参数我们还用不到，后面课程会用到
void func42_1(int a, int)
{
    cout << "This is func42_1" << endl;
}

//占位参数 也可以有默认值
void func42_2(int a, int = 30)
{
    cout << "This is func42_2" << endl;
}

int main42() {
    cout << "042_函数高级-函数站位参数" << endl;

    func42_1(10, 20);
    cout << "----------------------------------------------------------------" << endl;

    func42_2(10);
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
