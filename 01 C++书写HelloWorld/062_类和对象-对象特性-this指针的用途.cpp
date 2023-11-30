#include <iostream>
using namespace std;


/*
thisָ�� ָ�� ���ó�Ա�����Ķ���
thisָ�� ��������ÿһ�� �Ǿ�̬��Ա���� �ڵ�һ��ָ��
*/

class Person62
{
public:
    int age;

    Person62(int age)
    {
        // thisָ�� ָ�� ���ó�Ա�����Ķ���
        this->age = age;
    }

    Person62& PersonAddAge(Person62& p)
    {
        this->age += p.age;
        //���ض�������* this
        //this��ָ������ָ�룬�� *this ָ��ľ��Ƕ�����
        return *this;
    }

    Person62 PersonAddAge_2(Person62& p)  // ע�⣡���� ���ﷵ�ص���ֵ����������Ŀ������캯����
    {
        this->age += p.age;
        return *this;
    }

};

//1��������Ƴ�ͻ
void test62_1()
{
    Person62 p1(18);
    cout << "p1 ������Ϊ��" << p1.age << endl;
}

//2�����ض������� *this
void test62_2()
{
    Person62 p1(10);
    cout << "p1 ������Ϊ��" << p1.age << endl;
    cout << "*******************" << endl;

    Person62 p2(10);
    //��ʽ���˼�루���ص��Ƕ�������ã�
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    cout << "p2 ������Ϊ��" << p2.age << endl;
    cout << "*******************" << endl;

    Person62 p3(10);
    //���ص��Ƕ����ֵ����������Ŀ������캯����
    p3.PersonAddAge_2(p1).PersonAddAge_2(p1).PersonAddAge_2(p1);
    cout << "p3 ������Ϊ��" << p3.age << endl;
}


int main()
{
    cout << "062_��Ͷ���-��������-thisָ�����;" << endl;
    test62_1();
    cout << "----------------------------------------------------------------" << endl;

    test62_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}