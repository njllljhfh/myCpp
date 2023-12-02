#include <iostream>
#include <string>
using namespace std;


/*
�Ӻ����������

�ܽ�:
1���������õ��������͵ı��ʽ��������ǲ����ܸı�ģ��Զ������ſ���ʵ�����������
2����Ҫ�������������
*/


class Person68
{
public:
    int mA;
    int mB;

    //1����Ա�������� + ��
    Person68 operator+(Person68& p)
    {
        Person68 temp;
        temp.mA = this->mA + p.mA;
        temp.mB = this->mB + p.mB;
        return temp;
    }
};


class Person68_2
{
public:
    int mA;
    int mB;
};


//2��ȫ�ֺ������� + ��
Person68_2 operator+(Person68_2& p1, Person68_2& p2)
{
    Person68_2 temp;
    temp.mA = p1.mA + p2.mA;
    temp.mB = p1.mB + p2.mB;
    return temp;
}

//��������� Ҳ���Է�����������
Person68_2 operator+(Person68_2& p1, int num)
{
    Person68_2 temp;
    temp.mA = p1.mA + num;
    temp.mB = p1.mB + num;
    return temp;
}

void test68_1()
{
    cout << "1����Ա�������� + ��" << endl;
    Person68 p1;
    p1.mA = 10;
    p1.mB = 10;
    Person68 p2;
    p2.mA = 10;
    p2.mB = 10;
    //��Ա�������صı����ǣ�
    //Person68 p3 = p1.operator+(p2);
    Person68 p3 = p1 + p2;
    cout << "p3.mA = " << p3.mA << endl;
    cout << "p3.mB = " << p3.mB << endl;
    cout << "+++++++++++++++++++++++++++++++" << endl;


    cout << "2��ȫ�ֺ������� + ��" << endl;
    Person68_2 p4;
    p4.mA = 20;
    p4.mB = 20;
    Person68_2 p5;
    p5.mA = 20;
    p5.mB = 20;
    //ȫ�ֺ������صı����ǣ�
    //Person68_2 p6 = operator+(p4, p5);
    Person68_2 p6 = p4 + p5;
    cout << "p6.mA = " << p6.mA << endl;
    cout << "p6.mB = " << p6.mB << endl;
    cout << "+++++++++++++++++++++++++++++++" << endl;


    cout << "��������� Ҳ���Է�����������" << endl;
    Person68_2 p7 = p4 + 100;
    cout << "p7.mA = " << p7.mA << endl;
    cout << "p7.mB = " << p7.mB << endl;
}

int main68()
{
    cout << "068_��Ͷ���-���������-�Ӻ������" << endl;
    test68_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
