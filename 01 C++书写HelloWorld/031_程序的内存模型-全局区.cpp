#include <iostream>
using namespace std;


//全局变量
int g_a = 10;
int g_b = 10;

//全局常量：const 修饰的全局变量
const int c_g_a = 10;
const int c_g_b = 10;

int main31() {
    cout << "031_程序的内存模型-全局区" << endl;

    //全局区
    //全局变量、静态变量、常量

    //局部变量（不存放在全局区中）
    int a = 10;
    int b = 10;
    cout << "局部变量 a 的地址为：" << (long long)&a << endl;
    cout << "局部变量 b 的地址为：" << (long long)&b << endl;
    cout << "----------------------------------------------------------------" << endl;

    //全局变量（存放在全局区中）
    cout << "全局变量 g_a 的地址为：" << (long long)&g_a << endl;
    cout << "全局变量 g_b 的地址为：" << (long long)&g_b << endl;
    cout << "----------------------------------------------------------------" << endl;

    //静态变量，在普通变量前面加 static（存放在全局区中）
    static int s_a = 10;
    static int s_b = 10;
    cout << "静态变量 s_a 的地址为：" << (long long)&s_a << endl;
    cout << "静态变量 s_b 的地址为：" << (long long)&s_b << endl;
    cout << "----------------------------------------------------------------" << endl;

    //常量
    //字符串常量（存放在全局区中）
    cout << "字符串常量的地址为：" << (long long)&"hello world" << endl;
    cout << "***************************" << endl;

    //const 修饰的变量: const 修饰的全局变量、const 修饰的局部变量
    //全局常量：const 修饰的全局变量（存放在全局区中）
    cout << "全局常量 c_g_a 的地址为：" << (long long)&c_g_a << endl;
    cout << "全局常量 c_g_b 的地址为：" << (long long)&c_g_b << endl;
    cout << "***************************" << endl;

    //局部常量：const 修饰的局部变量（不存放在全局区中）
    const int c_l_a = 10;
    const int c_l_b = 10;
    cout << "局部常量 c_l_a 的地址为：" << (long long)&c_l_a << endl;
    cout << "局部常量 c_l_b 的地址为：" << (long long)&c_l_b << endl;
    cout << "----------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
