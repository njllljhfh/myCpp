#include <iostream>
using namespace std;


int main35() {
    cout << "035_����-���õĻ����÷�" << endl;
    int a = 10;

    //���û����﷨��
    //�������� &���� = ԭ��
    int& b = a;
    cout << "�����޸�ǰ��" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "----------------------------------------------------------------" << endl;

    b = 20;
    cout << "�����޸ĺ�" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "----------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
