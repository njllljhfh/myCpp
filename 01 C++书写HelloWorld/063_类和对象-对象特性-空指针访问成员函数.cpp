#include <iostream>
using namespace std;


/*
C++�� ��ָ�� Ҳ���Ե��ó�Ա����������ҲҪע����û���õ� this ָ��
*/

class Person63
{
public:
    int mAge;

    void showClassName()
    {
        //û���õ� this ָ�룬���Դ˺��������� NULL ָ�����
        cout << "this is Person63 class" << endl;
    }

    void showPersonAge()
    {
        if (this == NULL)
        {
            // ��� NULL ָ�� ���������
            return;
        }
        //����Ĵ����൱�ڣ�cout << "age = " << this->mAge << endl;
        //�޷���NULLָ����� mAge
        cout << "age = " << mAge << endl;
    }
};


void test63_1()
{
    Person63* p = NULL;
    p->showClassName();
    p->showPersonAge();
}

int main63()
{
    cout << "063_��Ͷ���-��������-��ָ����ʳ�Ա����" << endl;
    test63_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}