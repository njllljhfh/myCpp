#include <iostream>
using namespace std;


/*
���������: ++


ǰ�õ�������
MyInteger70& operator++();

���õ�������
MyInteger70 operator++(int);


ǰ�õ������ص������ã����õ������ص���ֵ
*/

//���ص��������

//�Զ�������
class MyInteger70
{
    friend ostream& operator<<(ostream& cout, const MyInteger70& myint);

public:
    MyInteger70()
    {
        mNum = 0;
    }

    //����ǰ�� ++ �����
    //��ʽ����
    MyInteger70& operator++()
    {
        mNum++;
        return *this;
    }

    //���غ��� ++ �����
    // MyInteger70 operator++(int)�� ���int������� ռλ������������������ǰ�úͺ��õ���
    MyInteger70 operator++(int)
    {
        //�ȼ�¼������ǰ������
        MyInteger70 temp = *this;

        //Ȼ�����
        mNum++;

        //��󽫼�¼�ĵ���ǰ�����ݷ���
        return temp;
    }

private:
    int mNum;
};

//����ȫ�ֺ������� << �����
// ���ﲻ�� const �Ļ������õ���ִ�к��޷�ֱ�� ���� cout << myint++;  (ԭ���꣺�����Ǳ�����������)������040_����-�������á�
ostream& operator<<(ostream& cout, const MyInteger70& myint)
{
    cout << myint.mNum;
    return cout;
}


void test70_1()
{
    cout << "ǰ�õ�����" << endl;
    MyInteger70 myint;
    cout << myint << endl;
    cout << ++(++myint) << endl;
    cout << myint << endl;
}


void test70_2()
{
    cout << "���õ�����" << endl;
    MyInteger70 myint;
    cout << myint << endl;
    cout << myint++ << endl;
    cout << myint << endl;
}


int main70()
{
    cout << "070_��Ͷ���-���������-���������" << endl;
    test70_1();
    cout << "----------------------------------------------------------------" << endl;

    test70_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
