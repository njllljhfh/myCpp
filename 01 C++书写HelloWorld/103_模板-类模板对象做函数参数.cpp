#include <iostream>
#include <string>
using namespace std;


/*
��ģ���������������
һ�������ִ��뷽ʽ:
    1.ָ�����������  ---   ֱ����ʾָ������ľ�����
    2.����ģ�廯      ---   �������еĲ�����Ϊģ����д���
    3.������ģ�廯    ---   �������������ģ�廯���д���


�ܽ᣺
    ʹ�������ǵ�һ�ַ�ʽ
*/


template<class T1, class T2>
class Person103
{
public:
    T1 mName;
    T2 mAge;

    Person103(T1 name, T2 age)
    {
        this->mName = name;
        this->mAge = age;
    }

    void showPerson()
    {
        cout << "������" << this->mName << " ���䣺" << this->mAge << endl;
    }
};


//1.ָ�����������
void printPerson103_1(Person103<string, int>& p)
{
    p.showPerson();
}

void test103_1()
{
    Person103<string, int> p("�����", 100);
    printPerson103_1(p);
}
//------------------------------------



//2.����ģ�廯������ģ�� ��� ��ģ�壩
template<class T1, class T2>
void printPerson103_2(Person103<T1, T2>& p)
{
    p.showPerson();
    //�鿴 T1 T2 ������
    cout << "T1 ������Ϊ��" << typeid(T1).name() << endl;
    cout << "T2 ������Ϊ��" << typeid(T2).name() << endl;
}

void test103_2()
{
    Person103<string, int> p("��˽�", 90);
    printPerson103_2(p);
}
//------------------------------------



//3.������ģ�廯������ģ�� ��� ��ģ�壩
template<class T>
void printPerson103_3(T& p)
{
    p.showPerson();
    cout << "T ������Ϊ��" << typeid(T).name() << endl;
}

void test103_3()
{
    Person103<string, int> p("��ɮ", 30);
    printPerson103_3(p);
}


int main103()
{
    cout << "103_ģ��-��ģ���������������" << endl << "=======================================================" << endl;

    test103_1();
    cout << "---------------------------------------------------------------------------" << endl;

    test103_2();
    cout << "---------------------------------------------------------------------------" << endl;

    test103_3();
    cout << "---------------------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
