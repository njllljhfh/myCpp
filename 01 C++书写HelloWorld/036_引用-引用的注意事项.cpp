#include <iostream>
using namespace std;


int main36() {
    cout << "036_����-���õ�ע������" << endl;
    //1�����ñ����ʼ��
    int a = 10;
    //int& b; //���󣬱���Ҫ��ʼ��
    int& b = a;


    //2�������ڳ�ʼ���󣬾Ͳ����Ըı���
    int c = 20;
    b = c; // ���Ǹ�ֵ�����������Ǹ��� b ������
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "----------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
