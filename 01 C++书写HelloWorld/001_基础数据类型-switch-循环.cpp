#include <iostream>
using namespace std;
#include <string>

#define Day 7

int main1() {
    int a = 10;
    cout << "a = " << a << endl;
    cout << "һ���ܹ���" << Day << "��" << endl;
    const int month = 12;
    cout << "һ���ܹ���" << month << "��" << endl;
    cout << "----------------------------------------------------------------" << endl;

    // ����
    cout << "���ͣ�" << endl;
    // ������
    short num1 = 10;
    //����
    int num2 = 10;
    //������
    long num3 = 10;
    //��������
    long long num4 = 10;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;
    cout << "----------------------------------------------------------------" << endl;

    // sizeof(��������/����)
    cout << "sizeof(��������/����)��" << endl;
    cout << "shortռ���ڴ�ռ�Ϊ��" << sizeof(short) << " �ֽ�" << endl;
    cout << "num4ռ���ڴ�ռ�Ϊ��" << sizeof(num4) << " �ֽ�" << endl;
    cout << "----------------------------------------------------------------" << endl;

    // ʵ�ͣ������ͣ�
    cout << "ʵ�ͣ������ͣ���" << endl;
    float f1 = 3.14f;
    cout << "f1 = " << f1 << endl;
    double d1 = 3.1415926;
    cout << "d1 = " << d1 << endl;
    cout << "floatռ���ڴ�ռ�Ϊ��" << sizeof(float) << " �ֽ�" << endl;
    cout << "doubleռ���ڴ�ռ�Ϊ��" << sizeof(double) << " �ֽ�" << endl;
    // ��ѧ������
    float f2 = 3e2;
    cout << "f2 = " << f2 << endl;
    float f3 = 3e-2;
    cout << "f3 = " << f3 << endl;
    cout << "----------------------------------------------------------------" << endl;

    //�ַ���
    cout << "�ַ��ͣ�" << endl;
    char ch = 'a';  //�����ţ����ַ�
    cout << "ch = " << ch << endl;
    cout << "�ַ��ͱ���ռ���ڴ�ռ�Ϊ��" << sizeof(char) << " �ֽ�" << endl;
    cout << int(ch) << endl;
    cout << "----------------------------------------------------------------" << endl;

    //ת���ַ�
    cout << "ת���ַ���" << endl;
    cout << "hello world\n";
    cout << "aa\thelloworld\n";
    cout << "aaaa\thelloworld\n";
    cout << "aaaaaa\thelloworld\n";
    cout << "----------------------------------------------------------------" << endl;

    //�ַ���
    cout << "�ַ�����" << endl;
    //1��C���
    char str1[] = "hello world";  //˫����
    cout << str1 << endl; 
    //2��c++��� 
    string str2 = "hello world";
    cout << str2 << endl;
    cout << "----------------------------------------------------------------" << endl;

    //��������
    cout << "�������ͣ�" << endl;
    bool flag = true;
    cout << flag << endl;
    flag = false;
    cout << flag << endl;
    cout << "��������ռ�õ��ڴ�: " << sizeof(bool) << " �ֽ�" << endl;
    cout << "----------------------------------------------------------------" << endl;

    ////��������
    //cout << "�������룺" << endl;
    ////int aa = 0;
    //int aa;
    //cout << "�����������aa��ֵ��" << endl;
    //cin >> aa;
    //cout << "aa = " << aa << endl;
    cout << "----------------------------------------------------------------" << endl;

    // ǰ�õ���
    cout << "���ֵ����ݼ���" << endl;
    int x1 = 10;
    int x2 = ++x1 * 10;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "******" << endl;
    int x3 = 10;
    int x4 = x3++ * 10;
    cout << "x3 = " << x3 << endl;
    cout << "x4 = " << x4 << endl;
    cout << "----------------------------------------------------------------" << endl;

    int score = 660;
    // ע��if����ĩβ��Ҫ�ӷֺ�
    if (score > 650)
    {
        cout << "��ϲ���������ص�һ��" << endl;
    }
    else if (score > 600)
    {
        cout << "��ϲ��������һ��" << endl;
    }
    else
    {
        cout << "����û����һ��" << endl;
    }
    cout << "----------------------------------------------------------------" << endl;
    

    //��Ŀ�����
    int x5 = 10;
    int x6 = 20;
    int x7 = 0;
    x7 = (x5 > x6 ? x5 : x6);
    cout << "x7 = " << x7 << endl;
    //��c++�У���ľ��������ص��Ǳ��������Լ�����ֵ
    (x5 > x6 ? x5 : x6) = 100;
    cout << "x5 = " << x5 << endl;
    cout << "x6 = " << x6 << endl;
    cout << "----------------------------------------------------------------" << endl;

    //switch
    cout << "switch��" << endl;
    //�� if �Աȣ�
    //ȱ�㣺�жϵ�ʱ��ֻ�������ͻ������ַ��ͣ���������һ������
    //�е㣺�ṹ������ִ��Ч�ʸ�
    int score2 = 4;
    switch (score2)
    {
    case 10:
        cout << "����Ϊ�Ǿ����Ӱ" << endl;
        break;
    case 9:
        cout << "����Ϊ�Ǿ����Ӱ" << endl;
        break;
    case 8:
        cout << "����Ϊ��Ӱ�ǳ���" << endl;
        break;
    case 6:
        cout << "����Ϊ��Ӱһ��" << endl;
        break;
    default:
        cout << "����������Ƭ" << endl;
    }
    cout << "----------------------------------------------------------------" << endl;

    //while
    cout << "whileѭ����" << endl;
    int num = 0;
    while (num < 10)
    {
        cout << "num = " << num << endl;
        num++;
    }
    cout << "----------------------------------------------------------------" << endl;

    //do while
    cout << "do whileѭ����" << endl;
    int num6 = 0;
    do {
        cout << num6 << endl;
        num6++;
    } while (num6 < 10);
    cout << "----------------------------------------------------------------" << endl;

    //forѭ��
    cout << "forѭ����" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }
    cout << "----------------------------------------------------------------" << endl;

    //goto���
    cout << "goto��䣺" << endl;
    cout << "1.xxx" << endl;
    cout << "2.xxx" << endl;
    goto FLAG;
    cout << "3.xxx" << endl;
    cout << "4.xxx" << endl;
    FLAG:
    cout << "5.xxx" << endl;

    cout << "----------------------------------------------------------------" << endl;

    cout << "123" << endl;
    system("pause");
    return 0;
}