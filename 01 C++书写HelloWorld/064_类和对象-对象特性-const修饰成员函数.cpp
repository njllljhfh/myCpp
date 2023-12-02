#include <iostream>
using namespace std;


/*
const ���γ�Ա����
������:
    ��Ա������� const �����ǳ�Ϊ�������Ϊ������
    �������ڲ������޸ĳ�Ա����
    ��Ա��������ʱ�ӹؼ��� mutable ���ڳ���������Ȼ�����޸�

������:
    ��������ǰ�� const �Ƹö���Ϊ������
    ������ֻ�ܵ��ó�����
*/


//������
class Person64
{
public:
    int mA;
    mutable int mB; //�����������ʹ�ڳ������У�Ҳ�����޸����ֵ���� mutable �ؼ��֣�

    //thisָ��ı��� �� ָ�볣����thisָ�� �൱���� Person64* const this;��ָ���ָ�� �������޸ģ�ָ��ָ���ֵ �����޸ģ�
    //�ں����������const�󣨳���������thisָ�� �൱���� const Person64* const this;��ָ���ָ�� �� ָ��ָ���ֵ ���������޸ģ�
    void showPerson() const
    {
        //this->mA = 100;
        //this = NULL; //thisָ�� �������޸�ָ���ָ��
        //---------------------

        this->mB = 100;
    }

    void func()
    {

    }
};

void test64_1()
{
    cout << "========== test64_1 ==========" << endl;
    Person64 p;
    p.showPerson();
    cout << "p.mb = " << p.mB << endl;
    p.mB = 200;
    cout << "p.mb = " << p.mB << endl;

    Person64 p2;
    p2.mB = 2;
    cout << "p2.mb = " << p2.mB << endl;
    cout << "p.mb = " << p.mB << endl;
}

//������
void test64_2()
{
    cout << "========== test64_2 ==========" << endl;
    //�ڶ���ǰ�� const����Ϊ ������
    const Person64 p;
    //p.mA = 100;  //�����󲻿����޸���ͨ�ĳ�Ա����
    p.mB = 3;  //����������޸� mutable ���ε��������
    cout << "p.mb = " << p.mB << endl;

    //������ ֻ�ܵ��� ������
    p.showPerson();
    cout << "p.mb = " << p.mB << endl;
    //p.func(); // ����
}

int main64()
{
    cout << "064_��Ͷ���-��������-const���γ�Ա����" << endl;
    test64_1();
    cout << "----------------------------------------------------------------" << endl;

    test64_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}