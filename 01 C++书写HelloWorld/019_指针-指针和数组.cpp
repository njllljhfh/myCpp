#include <iostream>
using namespace std;

int main19() {
    cout << "019_ָ��-ָ�������" << endl;

    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;

    int* p = arr;
    cout << "����ָ����ʵ�һ��Ԫ�أ�" << *p << endl;

    p++;
    cout << "����ָ����ʵڶ���Ԫ�أ�" << *p << endl;
    cout << "----------------------------------------------------------------" << endl;


    cout << "����ָ��������飺" << endl;
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
