#include <iostream>
using namespace std;
#include <string>

//������������ǰ���߱������������Ĵ���
//������������д��Σ����Ǻ�������ֻ����һ��
int max(int a, int b);
//int max(int a, int b);  //���ᱨ��

int main13() {
    cout << "013_����-��������" << endl;

    int a = 10, b = 20;
    //ֵ����
    cout << max(a, b) << endl;
    //������ a, b ��ֵû�иı�
    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}

int max(int a, int b)
{
    return a > b ? a : b;
}