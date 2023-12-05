#include <iostream>
using namespace std;
#include <string>

#define Day 7

int main1() {
    int a = 10;
    cout << "a = " << a << endl;
    cout << "一周总共有" << Day << "天" << endl;
    const int month = 12;
    cout << "一年总共有" << month << "天" << endl;
    cout << "----------------------------------------------------------------" << endl;

    // 整型
    cout << "整型：" << endl;
    // 短整型
    short num1 = 10;
    //整型
    int num2 = 10;
    //长整型
    long num3 = 10;
    //长长整型
    long long num4 = 10;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;
    cout << "----------------------------------------------------------------" << endl;

    // sizeof(数据类型/变量)
    cout << "sizeof(数据类型/变量)：" << endl;
    cout << "short占用内存空间为：" << sizeof(short) << " 字节" << endl;
    cout << "num4占用内存空间为：" << sizeof(num4) << " 字节" << endl;
    cout << "----------------------------------------------------------------" << endl;

    // 实型（浮点型）
    cout << "实型（浮点型）：" << endl;
    float f1 = 3.14f;
    cout << "f1 = " << f1 << endl;
    double d1 = 3.1415926;
    cout << "d1 = " << d1 << endl;
    cout << "float占用内存空间为：" << sizeof(float) << " 字节" << endl;
    cout << "double占用内存空间为：" << sizeof(double) << " 字节" << endl;
    // 科学计数法
    float f2 = 3e2;
    cout << "f2 = " << f2 << endl;
    float f3 = 3e-2;
    cout << "f3 = " << f3 << endl;
    cout << "----------------------------------------------------------------" << endl;

    //字符型
    cout << "字符型：" << endl;
    char ch = 'a';  //单引号，单字符
    cout << "ch = " << ch << endl;
    cout << "字符型变量占用内存空间为：" << sizeof(char) << " 字节" << endl;
    cout << int(ch) << endl;
    cout << "----------------------------------------------------------------" << endl;

    //转义字符
    cout << "转义字符：" << endl;
    cout << "hello world\n";
    cout << "aa\thelloworld\n";
    cout << "aaaa\thelloworld\n";
    cout << "aaaaaa\thelloworld\n";
    cout << "----------------------------------------------------------------" << endl;

    //字符串
    cout << "字符串：" << endl;
    //1、C风格
    char str1[] = "hello world";  //双引号
    cout << str1 << endl; 
    //2、c++风格 
    string str2 = "hello world";
    cout << str2 << endl;
    cout << "----------------------------------------------------------------" << endl;

    //布尔类型
    cout << "布尔类型：" << endl;
    bool flag = true;
    cout << flag << endl;
    flag = false;
    cout << flag << endl;
    cout << "布尔类型占用的内存: " << sizeof(bool) << " 字节" << endl;
    cout << "----------------------------------------------------------------" << endl;

    ////数据输入
    //cout << "数据输入：" << endl;
    ////int aa = 0;
    //int aa;
    //cout << "请给整形数据aa赋值：" << endl;
    //cin >> aa;
    //cout << "aa = " << aa << endl;
    cout << "----------------------------------------------------------------" << endl;

    // 前置递增
    cout << "数字递增递减：" << endl;
    int x1 = 10;
    int x2 = ++x1 * 10;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "******" << endl;
    int x3 = 10;
    int x4 = x3++ * 10;
    cout << "x3 = " << x3 << endl;
    cout << "x4 = " << x4 << endl;
    cout << "----------------------------------------------------------------" << endl;

    int score = 660;
    // 注意if这行末尾不要加分号
    if (score > 650)
    {
        cout << "恭喜您考上了重点一本" << endl;
    }
    else if (score > 600)
    {
        cout << "恭喜您考上了一本" << endl;
    }
    else
    {
        cout << "您考没考上一本" << endl;
    }
    cout << "----------------------------------------------------------------" << endl;
    

    //三目运算符
    int x5 = 10;
    int x6 = 20;
    int x7 = 0;
    x7 = (x5 > x6 ? x5 : x6);
    cout << "x7 = " << x7 << endl;
    //在c++中，三木运算符返回的是变量，可以继续赋值
    (x5 > x6 ? x5 : x6) = 100;
    cout << "x5 = " << x5 << endl;
    cout << "x6 = " << x6 << endl;
    cout << "----------------------------------------------------------------" << endl;

    //switch
    cout << "switch：" << endl;
    //和 if 对比：
    //缺点：判断的时候只能是整型或者是字符型，不可以是一个区间
    //有点：结构清晰，执行效率高
    int score2 = 4;
    switch (score2)
    {
    case 10:
        cout << "您认为是经典电影" << endl;
        break;
    case 9:
        cout << "您认为是经典电影" << endl;
        break;
    case 8:
        cout << "您认为电影非常好" << endl;
        break;
    case 6:
        cout << "您认为电影一般" << endl;
        break;
    default:
        cout << "您认这是烂片" << endl;
    }
    cout << "----------------------------------------------------------------" << endl;

    //while
    cout << "while循环：" << endl;
    int num = 0;
    while (num < 10)
    {
        cout << "num = " << num << endl;
        num++;
    }
    cout << "----------------------------------------------------------------" << endl;

    //do while
    cout << "do while循环：" << endl;
    int num6 = 0;
    do {
        cout << num6 << endl;
        num6++;
    } while (num6 < 10);
    cout << "----------------------------------------------------------------" << endl;

    //for循环
    cout << "for循环：" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }
    cout << "----------------------------------------------------------------" << endl;

    //goto语句
    cout << "goto语句：" << endl;
    cout << "1.xxx" << endl;
    cout << "2.xxx" << endl;
    goto FLAG;
    cout << "3.xxx" << endl;
    cout << "4.xxx" << endl;
    FLAG:
    cout << "5.xxx" << endl;

    cout << "----------------------------------------------------------------" << endl;

    cout << "123" << endl;
    system("pause");
    return 0;
}