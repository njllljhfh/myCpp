#include <iostream>
using namespace std;


//ȫ�ֱ���
int g_a = 10;
int g_b = 10;

//ȫ�ֳ�����const ���ε�ȫ�ֱ���
const int c_g_a = 10;
const int c_g_b = 10;

int main31() {
    cout << "031_������ڴ�ģ��-ȫ����" << endl;

    //ȫ����
    //ȫ�ֱ�������̬����������

    //�ֲ��������������ȫ�����У�
    int a = 10;
    int b = 10;
    cout << "�ֲ����� a �ĵ�ַΪ��" << (long long)&a << endl;
    cout << "�ֲ����� b �ĵ�ַΪ��" << (long long)&b << endl;
    cout << "----------------------------------------------------------------" << endl;

    //ȫ�ֱ����������ȫ�����У�
    cout << "ȫ�ֱ��� g_a �ĵ�ַΪ��" << (long long)&g_a << endl;
    cout << "ȫ�ֱ��� g_b �ĵ�ַΪ��" << (long long)&g_b << endl;
    cout << "----------------------------------------------------------------" << endl;

    //��̬����������ͨ����ǰ��� static�������ȫ�����У�
    static int s_a = 10;
    static int s_b = 10;
    cout << "��̬���� s_a �ĵ�ַΪ��" << (long long)&s_a << endl;
    cout << "��̬���� s_b �ĵ�ַΪ��" << (long long)&s_b << endl;
    cout << "----------------------------------------------------------------" << endl;

    //����
    //�ַ��������������ȫ�����У�
    cout << "�ַ��������ĵ�ַΪ��" << (long long)&"hello world" << endl;
    cout << "***************************" << endl;

    //const ���εı���: const ���ε�ȫ�ֱ�����const ���εľֲ�����
    //ȫ�ֳ�����const ���ε�ȫ�ֱ����������ȫ�����У�
    cout << "ȫ�ֳ��� c_g_a �ĵ�ַΪ��" << (long long)&c_g_a << endl;
    cout << "ȫ�ֳ��� c_g_b �ĵ�ַΪ��" << (long long)&c_g_b << endl;
    cout << "***************************" << endl;

    //�ֲ�������const ���εľֲ��������������ȫ�����У�
    const int c_l_a = 10;
    const int c_l_b = 10;
    cout << "�ֲ����� c_l_a �ĵ�ַΪ��" << (long long)&c_l_a << endl;
    cout << "�ֲ����� c_l_b �ĵ�ַΪ��" << (long long)&c_l_b << endl;
    cout << "----------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
