#include <iostream>
using namespace std;


/*
����ģ��
    ����ģ�����ùؼ��� template
    ʹ�ú���ģ�������ַ�ʽ���Զ������Ƶ�����ʽָ������
    ģ���Ŀ����Ϊ����߸����ԣ������Ͳ�����
*/


//����һ��ģ�壬���߱�������������н����ŵ� T ��Ҫ����T ��һ��ͨ����������
//typename �ؼ��ֿ����滻Ϊ class
//template<class T>
template<typename T>
void mySwap(T& a, T& b)
{
    //����
    T temp = a;
    a = b;
    b = temp;
}

void test94_1()
{

    //���ú���ģ�彻������
    //����ģ���ʹ�÷�ʽ������:
    //1���Զ������Ƶ�
    int a = 10;
    int b = 20;
    mySwap(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "**************************" << endl;

    //2����ʽ��ָ������
    int c = 30;
    int d = 40;
    mySwap<int>(c, d);
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
}

int main()
{
    cout << "094_ģ��-����ģ������﷨" << endl << "=======================================================" << endl;
    test94_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
