#include <iostream>
using namespace std;

int main15() {
    cout << "015_ָ�� - �����ʹ��" << endl;
    int a = 10;
    int* p;
    p = &a;
    cout << "a�ĵ�ַΪ��\t" << &a << endl;
    cout << "ָ��pΪ��\t" << p << endl;

    //����ͨ�� ������ �ķ�ʽ���ҵ�ָ��ָ����ڴ��е����ݣ�*p
    //�޸��ڴ��е�ֵ
    *p = 1000;
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
    cout << "----------------------------------------------------------------" << endl;

    cout << "ָ��pռ���ڴ�Ϊ��" << sizeof(p) << endl;
    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}
