#include <iostream>
#include <string>
using namespace std;


//����Ȩ��
//���֣�
//����Ȩ�� public       ��Ա ���ڿ��Է��ʣ�����Ҳ���Է���
//����Ȩ�� protected    ��Ա ���ڿ��Է��ʣ����ⲻ���Է��ʣ�������Է���
//˽��Ȩ�� private      ��Ա ���ڿ��Է��ʣ����ⲻ���Է��ʣ����಻���Է���

class Person47
{
public:
    string m_Name;

protected:
    string m_Car;

private:
    int m_Password;

public:
    void func()
    {
        m_Name = "����";
        m_Car = "������";
        m_Password = 123456;
    }
};

int main47() {
    cout << "047_��Ͷ���-��װ-����Ȩ��" << endl;

    Person47 p1;
    p1.m_Name = "����";
    //p1.m_Car = "����";  //����Ȩ�޵����ݣ������ⲻ���Է���
    //p1.m_Password = "����";  //˽��Ȩ�޵����ݣ������ⲻ���Է���
    p1.func();
    cout << "������" << p1.m_Name << endl;
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
