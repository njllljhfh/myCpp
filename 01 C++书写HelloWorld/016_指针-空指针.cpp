#include <iostream>
using namespace std;

int main16() {
    cout << "016_指针-空指针" << endl;

    //空指针：指针变量用于给指针变量进行初始化
    //内存地址为 0
    int* p = NULL; 
    cout << "指针p为：\t" << p << endl;

    //空指针是不可以进行访问的
    //0~255之间的内存编号是系统占用的，因此是不可以访问的
    *p = 100; //访问报错

    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}
