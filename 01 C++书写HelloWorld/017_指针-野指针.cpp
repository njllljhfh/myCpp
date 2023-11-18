#include <iostream>
using namespace std;

int main17() {
    cout << "017_指针-野指针" << endl;

    //野指针：指针变量指向非法的内存空间
    //在程序中尽量要避免出现野指针
    int* p = (int*)0x1100;

    //访问野指针会报错
    cout << *p << endl;

    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}
