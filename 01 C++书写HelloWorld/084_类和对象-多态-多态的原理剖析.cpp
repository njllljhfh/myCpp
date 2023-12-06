#include <iostream>
using namespace std;


//p136��
//https://www.bilibili.com/video/BV1et411b73Z/?p=136&spm_id_from=pageDriver&vd_source=d5456c77ecfc61e7372a8a02b7e73d29

/*
vfptr: virtual function pointor  �麯������ָ�룬ָ�� vftable


vftable: virtual function table   �麯����
    ���ڼ�¼�麯���ĵ�ַ


�ÿ�������ʾ���ߣ�ͨ������ȥ�鿴��Ӧ����Ľṹ
cl /d1 reportSingleClassLayoutCat84 084_��Ͷ���-��̬-��̬��ԭ������.cpp
*/

//����
class Animal84
{
public:
    //�麯��
    virtual void speak()
    {
        cout << "���� ��˵��" << endl;
    }
};


//è
class Cat84 :public Animal84
{
public:
    //��д������ĺ�������ֵ���� ������ �����б� �븸��ĺ�����ȫ��ͬ
    // virtual �ؼ���д��д������
    virtual void speak()
    {
        cout << "Сè ��˵��" << endl;
    }
};


//��
class Dog84 :public Animal84
{
public:
    void speak()
    {
        cout << "С�� ��˵��" << endl;
    }
};


//ִ��˵������
void doSpeak84(Animal84& animal) // Animal83_2& animal = cat;
{
    //�����ִ���� è ˵������ô���������ַ�Ͳ�����󶨣���Ҫ�����н׶ν��а󶨣�����ַ���
    animal.speak();
}

void test84_1()
{
    cout << "��ַ��󶨣�" << endl;
    Cat84 cat;
    doSpeak84(cat);
    cout << "++++++++++++++" << endl;

    Dog84 dog;
    doSpeak84(dog);
}

void test84_2()
{
    // speak �������� virtual��Animal84 �Ĵ�СΪ 1 ���ֽ� (����Ĵ�С)
    // speak ������ virtual��Animal84 �Ĵ�СΪ 8 ���ֽڣ�ָ��Ĵ�С����8���ֽڣ�
    cout << "size of Animal84 = " << sizeof(Animal84) << endl;
}


int main84()
{
    cout << "084_��Ͷ���-��̬-��̬��ԭ������" << endl << "=======================================================" << endl;
    test84_1();
    cout << "----------------------------------------------------------------" << endl;

    test84_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
