#include <iostream>
using namespace std;


//ֵ����
void mySwap371(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "mySwap371 a = " << a << endl;
    cout << "mySwap371 b = " << b << endl;
}

//��ַ����
void mySwap372(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "mySwap371 a = " << *a << endl;
    cout << "mySwap371 b = " << *b << endl;
}

//���ô���
void mySwap373(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "mySwap371 a = " << a << endl;
    cout << "mySwap371 b = " << b << endl;
}

int main37() {
    cout << "037_����-��������������" << endl;

    cout << "ֵ���ݣ�" << endl;
    int a = 10;
    int b = 20;
    mySwap371(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "----------------------------------------------------------------" << endl;

    cout << "��ַ���ݣ�" << endl;
    a = 10;
    b = 20;
    mySwap372(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "----------------------------------------------------------------" << endl;

    cout << "��ַ���ݣ�" << endl;
    a = 10;
    b = 20;
    mySwap373(a, b); //���ô��ݣ������ڲ����βν����޸ģ������ⲿ��ʵ��Ҳ����֮�ı�
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
