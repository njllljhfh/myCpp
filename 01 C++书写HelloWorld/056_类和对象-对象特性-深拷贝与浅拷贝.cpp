#include <iostream>
using namespace std;


/*
ǳ�������򵥵ĸ��ƿ�������
������ڶ�����������ռ䣬���п�������



�������Դ��Ŀ������캯����ִ�е���ǳ��������
    �������� ���� ���������ڴ���ظ��ͷ����⡣���������������������⡣



�ܽ᣺������������ڶ������ٵ����ݣ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ�������������⡣
*/

class Person56
{
public:
    Person56()
    {
        cout << "Person56 �޲ι��캯����Ĭ�Ϲ��캯�����ĵ���" << endl;
    }

    Person56(int age, int height)
    {
        cout << "Person56 �вι��캯���ĵ���" << endl;
        mAge = age;
        mHeight = new int(height); // ������� �� ����
    }

    Person56(const Person56& p)
    {
        cout << "Person56 �������캯���ĵ���" << endl;
        mAge = p.mAge;
        //mHeight = p.mHeight; //�� mHeight �Ŀ�����������Ĭ��ʵ�־������д��룬��ǳ����
        // �Լ�ʵ�� �������
        mHeight = new int(*p.mHeight);
    }

    ~Person56()
    {
        //�������룬���������ٵ��������ͷŲ���
        cout << "Person56 ���������ĵ���" << endl;
        if (mHeight != NULL)
        {
            delete mHeight;
            mHeight = NULL;
        }
    }

    int mAge;
    int* mHeight;
};

void test56_1()
{
    Person56 p1(18, 160);
    cout << "P1 �����g��" << p1.mAge << " ��P1 �����g��ַ��" << &p1.mAge << " ��P1 ����ߣ�" << *p1.mHeight << " ��P1 ����ߵ�ַ��" << p1.mHeight << endl;

    Person56 p2(p1);
    cout << "P2 �����g��" << p2.mAge << " ��P2 �����g��ַ��" << &p2.mAge << " ��P2 ����ߣ�" << *p2.mHeight << " ��P2 ����ߵ�ַ��" << p2.mHeight << endl;
    cout << "*****************" << endl;
}

int main56() {
    cout << "056_��Ͷ���-��������-�����ǳ����" << endl;
    test56_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}