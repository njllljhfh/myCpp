#include <iostream>
#include <string>
using namespace std;


//struct �� class ������
//struct Ĭ��Ȩ���� ���� public
//class  Ĭ��Ȩ���� ˽�� private

class C1
{
    int m_A; //Ĭ��Ȩ���� ˽�� private
};


struct C2
{
    int m_A; //Ĭ��Ȩ���� ���� public
};

int main48() {
    cout << "048_��Ͷ���-��װ-struct��class������" << endl;

    C1 c1;
    //c1.m_A = 100;  //���ɷ���

    C2 c2;
    c2.m_A = 100; //���Է���
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
