#include <iostream>
#include <string>
using namespace std;


//��Ա��������Ϊ˽��
//1�������Լ����ƶ�дȨ��
//2������д���Լ�����ݵ���Ч��

class Person49
{
private:
    //������Ȩ�ޣ��ɶ���д��
    string mName;
    //���䣨Ȩ�ޣ��ɶ���д��
    int mAge;
    //���ˣ�Ȩ�ޣ�ֻд��
    string mLover;

public:
    //��������
    void setNmae(string name)
    {
        mName = name;
    }
    //��ȡ����
    string getName()
    {
        return mName;
    }
    //��ȡ����
    int getAge()
    {
        return mAge;
    }
    //��������
    void setAge(int age)
    {
        if (age >= 0 && age <= 150)
        {
            mAge = age;
        }
        else
        {
            mAge = 0;
            cout << "��������ȷ���䣬0-150��" << endl;
        }
    }
    //��������
    void setLover(string lover)
    {
        mLover = lover;
    }
};

int main49() {
    cout << "049_��Ͷ���-��װ-��Ա����˽�л�" << endl;
    Person49 p;
    p.setNmae("����");
    cout << "������" << p.getName() << endl;

    p.setAge(18);

    //p.mAge = 10; //����
    cout << "���䣺" << p.getAge() << endl;

    p.setLover("����");
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
