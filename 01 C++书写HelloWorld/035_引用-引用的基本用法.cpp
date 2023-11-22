#include <iostream>
using namespace std;


int main35() {
    cout << "035_引用-引用的基本用法" << endl;
    int a = 10;

    //引用基本语法：
    //数据类型 &别名 = 原名
    int& b = a;
    cout << "数据修改前：" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "----------------------------------------------------------------" << endl;

    b = 20;
    cout << "数据修改后：" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "----------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
