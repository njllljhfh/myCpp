#include <iostream>
using namespace std;


//�������ص�ע������
//1��������Ϊ���ص�����
void func44_1(int& a)
{
    cout << "func44_1(int& a) ����" << endl;
}

void func44_1(const int& a)
{
    cout << "func44_1(const int& a) ����" << endl;
}


//2��������������Ĭ�ϲ���
//��������������Ĭ�ϲ���������ֶ����ԣ�����Ҫ�����������
void func44_2(int a, int b = 10)
{
    cout << "func44_2(int a, int b) ����" << endl;
}

void func44_2(int a)
{
    cout << "func44_2(int a) ����" << endl;
}

int main44() {
    cout << "044_�����߼�-��������ע������" << endl;

    cout << "������Ϊ���ص�����" << endl;
    int a = 10;
    func44_1(a);
    cout << "*************************" << endl;
    const int b = 20;
    func44_1(b);
    func44_1(30);
    cout << "----------------------------------------------------------------" << endl;

    cout << "������������Ĭ�ϲ���" << endl;
    //func44_2(10); //��������������Ĭ�ϲ���������ֶ����ԣ�����Ҫ�����������
    cout << "----------------------------------------------------------------" << endl;
    //system("pause");
    cin.get();
    return 0;
}
