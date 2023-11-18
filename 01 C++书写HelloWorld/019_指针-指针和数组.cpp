#include <iostream>
using namespace std;

int main19() {
    cout << "019_指针-指针和数组" << endl;

    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    cout << "第一个元素为：" << arr[0] << endl;

    int* p = arr;
    cout << "利用指针访问第一个元素：" << *p << endl;

    p++;
    cout << "利用指针访问第二个元素：" << *p << endl;
    cout << "----------------------------------------------------------------" << endl;


    cout << "利用指针遍历数组：" << endl;
    int* p2 = arr;
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        cout << *p2 << endl;
        p2++;
    }
    cout << "----------------------------------------------------------------" << endl;
    system("pause");
    return 0;
}
