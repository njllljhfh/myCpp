#include <iostream>
using namespace std;


//����Ĭ�ϲ���
// ע�⣺
//1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
int func41_1(int a, int b = 20, int c = 30)
{
    return a + b + c;
}


//2���������������Ĭ�ϲ�����������ʵ�־Ͳ�����Ĭ�ϲ���
int func41_2(int a = 10, int b = 10);
//���ﲻ����Ĭ�ϲ���
int func41_2(int a, int b)
{
    return a + b;
}


//������ʵ�֣�ֻ����һ����Ĭ�ϲ���
int func41_3(int a, int b);
int func41_3(int a = 20, int b = 20)
{
    return a + b;
}


int main41() {
    cout << "041_�����߼�-����Ĭ�ϲ���" << endl;

    cout << func41_1(10) << endl;
    cout << func41_1(10, 30) << endl;
    cout << "----------------------------------------------------------------" << endl;


    cout << func41_2() << endl;
    cout << "----------------------------------------------------------------" << endl;


    cout << func41_3() << endl;
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
