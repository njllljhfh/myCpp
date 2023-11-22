#include <iostream>
using namespace std;


//常量引用 主要用于修饰形参，防止误操作
//防止形参改变实参
void showValue40(const int& val)
{
    //val = 1000; // 加上 const 后，不可修改
    cout << "val = " << val << endl;
}


int main() {
    cout << "040_引用-常量引用" << endl;


    //int& ref = 10; // 报错，引用必须引用一块合法的内存空间
    //加上 const 后，编译器将代码修改为： int temp = 10; const int& ref = temp;
    const int& ref = 10; // 开发中一般不会这么用
    //ref = 20; //报错，加入 const 之后变为只读，不可以修改
    cout << "----------------------------------------------------------------" << endl;


    cout << "常量引用：主要用于修饰形参，防止形参改变实参" << endl;
    int a = 20;
    showValue40(a);
    cout << "a = " << a << endl;
    cout << "----------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
