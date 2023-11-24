#include <iostream>
#include <string>
using namespace std;


//struct 和 class 的区别
//struct 默认权限是 公有 public
//class  默认权限是 私有 private

class C1
{
    int m_A; //默认权限是 私有 private
};


struct C2
{
    int m_A; //默认权限是 公有 public
};

int main48() {
    cout << "048_类和对象-封装-struct和class的区别" << endl;

    C1 c1;
    //c1.m_A = 100;  //不可访问

    C2 c2;
    c2.m_A = 100; //可以访问
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
