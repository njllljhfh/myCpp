#include <iostream>
#include <string>
#include <thread>
using namespace std;


//1��new �Ļ����﷨
int* func34()
{
    //�ڶ���������������
    int* p = new int(10);
    return p;
}

void test341()
{
    int* p = func34();
    cout << *p << endl;
    //�����������ɳ���Ա�����٣��ɳ���Ա�����ͷ�
    //������ͷŶ������ݣ����ùؼ��� delete
    delete p;  //�ͷ�p���ڴ�
    //cout << *p << endl; //�ڴ��Ѿ��ͷ��ˣ��ٴη��ʻᱨ��: ��ȡ����Ȩ�޳�ͻ��
}

//2���ڶ������� new ��������
void test342()
{
    //����10���������ݵ����飬�ٶ���
    int* arr = new int[10]; //10����������10��Ԫ��
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    //�ͷŶ���������
    //�ͷ�����ʱ��Ҫ��[]�ſ���
    delete[] arr;
}

int main34() {
    cout << "034_������ڴ�ģ��-new������" << endl;

    //1��new �Ļ����﷨
    test341();

    cout << "----------------------------------------------------------------" << endl;

    //2���ڶ������� new ��������
    test342();
    cout << "----------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
