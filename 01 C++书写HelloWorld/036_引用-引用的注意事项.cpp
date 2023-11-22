#include <iostream>
using namespace std;


int main36() {
    cout << "036_引用-引用的注意事项" << endl;
    //1、引用必须初始化
    int a = 10;
    //int& b; //错误，必须要初始化
    int& b = a;


    //2、引用在初始化后，就不可以改变了
    int c = 20;
    b = c; // 这是赋值操作，而不是更改 b 的引用
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "----------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
