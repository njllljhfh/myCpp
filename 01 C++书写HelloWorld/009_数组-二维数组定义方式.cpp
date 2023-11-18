#include <iostream>
using namespace std;

int main9() {
    cout << "009_数组-二维数组定义方式" << endl;

    //定义方式1：数据类型 数组名[行数][列数];
    cout << "定义方式1:" << endl;
    const int row = 2;
    const int col = 3;
    int arr[row][col];
    arr[0][1] = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "[" << i << ", " << j << "]: " << arr[i][j] << endl;
        }
    }
    cout << "----------------------------------------------------------------" << endl;


    //定义方式2：数据类型 数组名[行数][列数] = { {数据1，数据2...}， {数据3，数据4...} };
    cout << "定义方式2:" << endl;
    int arr2[row][col] = {
        {1,2,3},
        {4,5,6},
    };
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------------------------------------------------------" << endl;


    //定义方式3：数据类型 数组名[行数][列数] = { 数据1，数据2，数据3，数据4... };
    cout << "定义方式3:" << endl;
    int arr3[row][col] = { 1,2,3,4,5,6 };
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------------------------------------------------------" << endl;


    //定义方式4：数据类型 数组名[][列数] = { 数据1，数据2，数据3，数据4... };
    cout << "定义方式4:" << endl;
    int arr4[][col] = { 6,5,4,3,2,1 };
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr4[i][j] << " ";
        }
        cout << endl;
    }

    cout << "二维数组占用内存：" << sizeof(arr4) << endl;
    cout << "二维数组第一行占用内存：" << sizeof(arr4[0]) << endl;
    cout << "二维数组第一个数据占用内存：" << sizeof(arr4[0][0]) << endl;
    cout << "二维数组的行数：" << sizeof(arr4) / sizeof(arr4[0]) << endl;
    cout << "二维数组的列数：" << sizeof(arr4[0]) / sizeof(arr4[0][0]) << endl;
    //下面3个地址是一样的
    cout << "二维数组的首地址：" << arr4 << endl;
    cout << "二维数组第一行数据的首地址：" << arr4[0] << endl;
    cout << "二维数组第一个数据的首地址：" << &arr4[0][0] << endl;
    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}