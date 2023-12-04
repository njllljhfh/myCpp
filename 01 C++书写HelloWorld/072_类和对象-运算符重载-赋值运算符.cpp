#include <iostream>
using namespace std;

/*
��ֵ���������
C++ ���������ٸ�һ������� 4 ������
    1.Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
    2.Ĭ����������(�޲Σ�������Ϊ��)
    3.Ĭ�Ͽ������캯���������Խ���ֵ����
    4.��ֵ����� operator=�������Խ���ֵ����
*/

class Person72
{
public:
    int* mAge;

    Person72(int age)
    {
        mAge = new int(age);
    }

    Person72(const Person72& p)
    {
        cout << "Person72 �������캯��" << endl;
        mAge = new int(*p.mAge);
    }

    ~Person72()
    {
        if (mAge != NULL)
        {
            delete mAge;
            mAge = NULL;
        }
    }

    //���ظ�ֵ�����
    Person72& operator=(Person72& p)
    {
        //������Ĭ���ṩ�� ��ֵ����� ��ǳ����
        //mAge = p.mAge;
        //-------------------------------


        //�Լ�ʵ�����
        //Ӧ�����ж��Ƿ��������ڶ���������У����ͷŸɾ���Ȼ���ٽ������
        if (mAge != NULL)
        {
            delete mAge;
            mAge = NULL;
        }
        //���
        mAge = new int(*p.mAge);

        //���ض�����
        return *this;
    }
};

void test72_1()
{
    Person72 p1(18);
    cout << "p1.mAge = " << *p1.mAge << endl;
    Person72 p2(20);
    cout << "p2.mAge = " << *p2.mAge << endl;
    cout << "+++++++++++++++++++++++++++++++" << endl;


    p2 = p1;
    cout << "p1.mAge = " << *p1.mAge << endl;
    cout << "p2.mAge = " << *p2.mAge << endl;
}

void test72_2()
{
    //��������������ֵ����
    int a = 10;
    int b = 20;
    int c = 30;
    c = b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "+++++++++++++++++++++++++++++++" << endl;


    Person72 p1(18);
    Person72 p2(20);
    Person72 p3(30);
    p3 = p2 = p1;
    cout << "p1.mAge = " << *p1.mAge << endl;
    cout << "p2.mAge = " << *p2.mAge << endl;
    cout << "p3.mAge = " << *p3.mAge << endl;
}

int main72()
{
    cout << "072_��Ͷ���-���������-��ֵ�����" << endl;
    test72_1();
    cout << "----------------------------------------------------------------" << endl;

    test72_2();
    cout << "----------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
