#include <iostream>
using namespace std;


class MyInteger71
{
    friend ostream& operator<<(ostream& cout, const MyInteger71& myint);

public:
    MyInteger71()
    {
        mNum = 0;
    }

    // ǰ�õݼ�
    MyInteger71& operator--()
    {
        this->mNum--;
        return *this;
    }

    // ���õݼ�
    MyInteger71 operator--(int)
    {
        MyInteger71 temp = *this;
        mNum--;
        return temp;
    }

private:
    int mNum;
};

// ���ﲻ�� const �Ļ������õ���ִ�к��޷�ֱ�� ���� cout << myint--;  (ԭ���꣺�����Ǳ�����������)������040_����-�������á�
ostream& operator<<(ostream& cout, const MyInteger71& myint)
{
    cout << myint.mNum;
    return cout;
}

void test71_1()
{
    cout << "ǰ�õݼ���" << endl;
    MyInteger71 myint;
    cout << myint << endl;
    cout << --(--myint) << endl;
    cout << myint << endl;
}


void test71_2()
{
    cout << "���õݼ���" << endl;
    MyInteger71 myint;
    cout << myint << endl;
    cout << myint-- << endl;  // operator<< ���� �Ĳ��� const MyInteger71& myint ���� const �Ļ������д��뱨��
    cout << myint << endl;
}


int main71()
{
    cout << "071_��Ͷ���-���������-�ݼ������-��ϰ" << endl;
    test71_1();
    cout << "----------------------------------------------------------------" << endl;

    test71_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
