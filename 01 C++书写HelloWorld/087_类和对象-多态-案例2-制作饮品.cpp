#include <iostream>
using namespace std;


/*
����2��������Ʒ
*/


//�������
class AbstractDrinking87
{
public:
    //��ˮ
    virtual void boil() = 0;
    //����
    virtual void brew() = 0;
    //���뱭��
    virtual void pourInCup() = 0;
    //���븨��
    virtual void putSomething() = 0;
    //������Ʒ
    virtual void makeDrink()
    {
        boil();
        brew();
        pourInCup();
        putSomething();
    }
};


//��������
class Coffee87 :public AbstractDrinking87
{
public:
    //��ˮ
    virtual void boil()
    {
        cout << "��ũ��ɽȪ" << endl;
    }
    //����
    virtual void brew()
    {
        cout << "���ݿ���" << endl;
    }
    //���뱭��
    virtual void pourInCup()
    {
        cout << "���뱭��" << endl;
    }
    //���븨��
    virtual void putSomething()
    {
        cout << "�����Ǻ�ţ��" << endl;
    }
};


//������Ҷ
class Tea87 :public AbstractDrinking87
{
public:
    //��ˮ
    virtual void boil()
    {
        cout << "���Ȫˮ" << endl;
    }
    //����
    virtual void brew()
    {
        cout << "���ݲ�Ҷ" << endl;
    }
    //���뱭��
    virtual void pourInCup()
    {
        cout << "���뱭��" << endl;
    }
    //���븨��
    virtual void putSomething()
    {
        cout << "��������" << endl;
    }
};


void doWork(AbstractDrinking87* abs)
{
    abs->makeDrink();
    delete abs; //�ͷŶ����ڴ�
}

void test87_1()
{
    //��������
    doWork(new Coffee87);
    cout << "+++++++++++++++++++++++++" << endl;

    //������Ҷ
    doWork(new Tea87);
}

int main87()
{
    cout << "087_��Ͷ���-��̬-����2-������Ʒ" << endl << "=======================================================" << endl;
    test87_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
