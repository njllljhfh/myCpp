#include <iostream>
using namespace std;


/*
�̳��еĶ���ģ��
    ���������зǾ�̬��Ա���Զ��ᱻ����̳�
    ������˽�г�Ա���� �Ǳ��������������ˣ�����Ƿ��ʲ����ģ�����ȷʵ������̳���


��windows�Ŀ�ʼ���棬�� Developer Command Prompt for VS 2022 (������Ա������ʾ��)��
��ת�̷�,����  e:
�л���Ҫ�鿴������ļ�����Ŀ¼��������   cd E:\Matrixtime\workfile\GitHub\myCpp\01 C++��дHelloWorl
�������������鿴 Son77 ��� ���֣����浥����Ĳ��֣�
cl /d1 reportSingleClassLayoutSon77 077_��Ͷ���-�̳�-�̳��е� ����ģ��.cpp
*/


class Base77
{
public:
    int mA;
protected:
    int mB;
private:
    int mC;
};


class Son77 :public Base77
{
public:
    int mD;
};


void test77_1()
{
    // ռ�� 16 ���ֽ�
    cout << "size of Son77 = "<< sizeof(Son77) << endl;
}

int main77()
{
    cout << "077_��Ͷ���-�̳�-�̳��еĶ���ģ��" << endl;
    test77_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
