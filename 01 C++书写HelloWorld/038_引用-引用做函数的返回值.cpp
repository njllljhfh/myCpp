#include <iostream>
#include <thread>
using namespace std;


//1����Ҫ���ؾֲ�����������
int& test381()
{
    int a = 10;
    return a;
}

//2�������ĵ��ÿ�����Ϊ��ֵ
int& test382()
{
    static int a = 10; //��̬����������� ȫ������ȫ�����ϵ������ڳ�������� ϵͳ�ͷ�
    return a;
}

int main38() {
    cout << "038_����-�����������ķ���ֵ" << endl;

    cout << "��Ҫ���ؾֲ�����������" << endl;
    int& ref = test381();
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    cout << "ref = " << ref << endl; // ref��ֵ�Ǵ����
    cout << "----------------------------------------------------------------" << endl;


    cout << "�����ĵ��ÿ�����Ϊ��ֵ" << endl;
    int& ref2 = test382();
    //std::this_thread::sleep_for(std::chrono::milliseconds(500));
    cout << "ref2 = " << ref2 << endl; //10

    //����ĸ�ֵ�����ı��� test382 ������ a ��ֵ
    test382() = 1000; //��������ķ���ֵ�����ã���������ĵ��ÿ�����Ϊ��ֵ
    cout << "ref2 = " << ref2 << endl; //1000
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
