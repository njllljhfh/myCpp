#include <iostream>
using namespace std;


/*
�����������  <<

�ܽ᣺��������������������Ԫ����ʵ������Զ����������ݡ�
*/


//�������������
class Person69
{
    friend ostream& operator<<(ostream& cout, Person69& p);

public:
    Person69(int a, int b)
    {
        mA = a;
        mB = b;
    }

    //�������ó�Ա���������� �������������Ϊ�޷�ʵ�� cout �����ĵ��÷�ʽ��
    //void operator<<(cout)
    //{
    //}

private:
    int mA;
    int mB;
};


//ֻ������ȫ�ֺ����������������
//���� operator<<(cout, p);  �򻯰汾 cout << p;
//ostream�������
ostream& operator<<(ostream& cout, Person69& p)
{
    cout << "mA = " << p.mA << ", mB = " << p.mB;
    return cout;
}

void test69_1()
{
    Person69 p(10, 20);
    cout << p << endl;
}

int main69()
{
    cout << "069_��Ͷ���-���������-���������" << endl;
    test69_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
