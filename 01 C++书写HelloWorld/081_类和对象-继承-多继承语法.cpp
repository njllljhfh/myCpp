#include <iostream>
using namespace std;


/*
C++����һ����̳ж����
    �﷨��class ���� : �̳з�ʽ ����1, �̳з�ʽ ����2 ...
    ��̳п���������������ͬ����Ա���ֵ����⣬��Ҫ������������


ʵ�ʿ����У�������ʹ�ö�̳У�����
*/


class Base81_1
{
public:
    int mA;
    Base81_1()
    {
        mA = 100;
    }
};


class Base81_2
{
public:
    int mA;
    Base81_2()
    {
        mA = 200;
    }
};


//��̳�
class Son81 :public Base81_1, public Base81_2
{
public:
    int mC;
    int mD;
    Son81()
    {
        mC = 300;
        mD = 400;
    }
};


void test81_1()
{
    Son81 s;
    cout << "size of Son81 = " << sizeof(s) << endl;

    //�������г���ͬ����Ա����Ҫ�Ӹ���������
    //cout << "mA = " << s.mA << endl;
    cout << "Base81_1::mA = " << s.Base81_1::mA << endl;
    cout << "Base81_2::mA = " << s.Base81_2::mA << endl;
}

int main81()
{
    cout << "081_��Ͷ���-�̳�-��̳��﷨" << endl;
    test81_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
