#include <iostream>
using namespace std;


/*
�̳��й����������˳��
    �ȵ��ø��๹�캯�����ٵ������๹�캯����������˳���빹��˳���෴��
*/


class Base78
{
public:
    Base78()
    {
        cout << "Base78 ���캯��" << endl;
    }

    ~Base78()
    {
        cout << "Base78 ��������" << endl;
    }
};


class Son78 :public Base78
{
public:
    Son78()
    {
        cout << "Son78 ���캯��" << endl;
    }

    ~Son78()
    {
        cout << "Son78 ��������" << endl;
    }

};

void test78_1()
{
    /*
    Base78 ���캯��
    Son78 ���캯��
    Son78 ��������
    Base78 ��������
    */
    Son78 s;
}

int main78()
{
    cout << "078_��Ͷ���-�̳�-���������˳��" << endl;
    test78_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
