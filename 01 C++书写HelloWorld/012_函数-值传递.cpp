#include <iostream>
using namespace std;
#include <string>


void swap(int num1, int num2)
{
    cout << "����ǰ��" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "������" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
}


int main12() {
    cout << "012_����-ֵ����" << endl;

    int a = 10, b = 20;
    //ֵ����
    swap(a, b);
    //������ a, b ��ֵû�иı�
    cout << "������" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}