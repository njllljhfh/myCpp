#include <iostream>
#include <string>
using namespace std;


/*
���캯�����ù���
������һ���࣬Ĭ������£�c++������ ���ٸ�һ�������3������
    1.Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
    2.Ĭ�������������޲Σ�������Ϊ�գ�
    3.Ĭ�Ͽ������캯���������Խ���ֵ������ǳ������

���캯�����ù�������:
	����û��������вι��캯����c++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
	����û������˿������캯����c++�������ṩ�������캯��
*/

class Person55
{
public:
    Person55()
    {
        cout << "Person55 �޲ι��캯����Ĭ�Ϲ��캯�����ĵ���" << endl;
    }

    Person55(int age)
    {
        cout << "Person55 �вι��캯���ĵ���" << endl;
        mAge = age;
    }

    Person55(const Person55& p)
    {
        cout << "Person55 �������캯���ĵ���" << endl;
        mAge = p.mAge;
    }

    ~Person55()
    {
        cout << "Person55 ���������ĵ���" << endl;
    }

    int mAge;
};

void test55_1()
{
    Person55 p;
    p.mAge = 18;
    Person55 p2(p);
    cout << "P2 �����g��"<< p2.mAge << endl;
}

int main55() {
	cout << "055_��Ͷ���-��������-���캯�����ù���" << endl;

    test55_1();
	cout << "----------------------------------------------------------------" << endl;

	//system("pause");
	cin.get();
	return 0;
} 