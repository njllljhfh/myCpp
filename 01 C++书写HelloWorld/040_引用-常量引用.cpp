#include <iostream>
using namespace std;


//�������� ��Ҫ���������βΣ���ֹ�����
//��ֹ�βθı�ʵ��
void showValue40(const int& val)
{
    //val = 1000; // ���� const �󣬲����޸�
    cout << "val = " << val << endl;
}


int main() {
    cout << "040_����-��������" << endl;


    //int& ref = 10; // �������ñ�������һ��Ϸ����ڴ�ռ�
    //���� const �󣬱������������޸�Ϊ�� int temp = 10; const int& ref = temp;
    const int& ref = 10; // ������һ�㲻����ô��
    //ref = 20; //�������� const ֮���Ϊֻ�����������޸�
    cout << "----------------------------------------------------------------" << endl;


    cout << "�������ã���Ҫ���������βΣ���ֹ�βθı�ʵ��" << endl;
    int a = 20;
    showValue40(a);
    cout << "a = " << a << endl;
    cout << "----------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
