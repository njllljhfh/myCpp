#include <iostream>
#include <string>
using namespace std;


/*
�����������������
    ������������� () Ҳ��������
    �������غ� ���õķ�ʽ�ǳ������ĵ��ã���˳�Ϊ �º���
    �º��� û�й̶�д�����ǳ����
*/


class MyPrint74
{
public:
   //���غ������������
    void operator()(string test)
    {
        cout << test << endl;
    }
};

void test74_1()
{
    MyPrint74 myPrint;
    //����ʹ�������ǳ������ں������ã���˳�֮Ϊ�º���
    myPrint("hello world");
}


//�º��� �ǳ���û�й̶���д��
//�ӷ���
class MyAdd74
{
public:
    int operator()(int a, int b) {
        return a + b;
    }
};


void test74_2()
{
    MyAdd74 myAdd;
    int res = myAdd(100, 200);
    cout << "res = " << res << endl;
    cout << "+++++++++++++++++++++++++++++++" << endl;


    //�����������������д�����ֻ��������������������ִ�������ڴ�ᱻ�����ͷ�
    cout << "����������÷º�����" << endl;
    cout << MyAdd74()(1, 2) << endl;
}

int main74()
{
    cout << "074_��Ͷ���-���������-�������������" << endl;
    test74_1();
    cout << "----------------------------------------------------------------" << endl;

    test74_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
