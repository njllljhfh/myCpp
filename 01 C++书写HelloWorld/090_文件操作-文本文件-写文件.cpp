#include <iostream>
#include <fstream>
using namespace std;


/*
程序运行时产生的数据都属于临时数据，程序一旦运行结束都会被释放
通过文件可以将数据持久化
C++中对文件操作需要包含头文件 <fstream>

文件类型分为两种:
    1、文本文件：文件以文本的 ASCII 码形式存储在计算机中
    2、二进制文件：文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂它们

操作文件的三大类:
    1、ofstream: 写操作
    2、ifstream: 读操作
    3、fstream : 读写操作
*/


void test90_1()
{
    //写数据：
    //1、包含头文件
    // #include <fstream>

    //2、创建流对象
    ofstream ofs;

    //3、打开文件
    ofs.open("090_test1.txt", ios::out);

    //4、写数据
    ofs << "姓名：张三" << endl;
    ofs << "性别：男" << endl;
    ofs << "年龄：18" << endl;

    //5、关闭文件
    ofs.close();

    //cout << "+++++++++++++++++++++++++" << endl;
}

int main()
{
    cout << "090_文件操作-文本文件-写文件" << endl << "=======================================================" << endl;
    test90_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}

