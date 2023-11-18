#include <iostream>
using namespace std;

void swap201(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap202(int* p1, int* p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main20() {
    cout << "020_指针-指针和函数" << endl;

    //1.值传递
    cout << "值传递：" << endl;
    int a = 10;
    int b = 20;
    swap201(a, b);
    cout << "main  a = " << a << endl;
    cout << "main  b = " << b << endl;
    cout << "----------------------------------------------------------------" << endl;


    //2.指针传递
    cout << "指针传递：" << endl;
    swap202(&a, &b);
    cout << "main  a = " << a << endl;
    cout << "main  b = " << b << endl;
    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}
