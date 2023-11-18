#include <iostream>
using namespace std;

int main5() {
    cout << "005_数组定义" << endl;

    //定义方式1：数据类型 数组名[数组长度];
    cout << "定义方式1：数据类型 数组名[数组长度]" << endl;
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    cout << arr[0] << endl;
    cout << "----------------------------------------------------------------" << endl;


    //定义方式2：数据类型 数组名[数组长度] = {值1，值2，值3};
    cout << "定义方式2：数据类型 数组名[数组长度] = {值1，值2，值3}" << endl;
    int arr2[5] = { 10,20,30 };
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << endl;
    }
    cout << "----------------------------------------------------------------" << endl;


    //定义方式3：数据类型 数组名[] =  {值1，值2，...};
    cout << "定义方式3：数据类型 数组名[] =  {值1，值2，...}" << endl;
    int arr3[] = { 90,80,70,60,50 };

    int length3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "arr3的长度：" << length3 << endl;

    for (int i = 0; i < length3; i++) {
        cout << arr3[i] << endl;
    }
    cout << "arr3的首地址: " << arr3 << endl;
    cout << "arr3中第 1 个元素的地址: " << &arr3[0] << endl;
    cout << "arr3中第 2 个元素的地址: " << &arr3[1] << endl;
    //数组名是 常量，不可以进行赋值操作
    //arr3 = 100;
    cout << "----------------------------------------------------------------" << endl;
    system("pause");
    return 0;
}
