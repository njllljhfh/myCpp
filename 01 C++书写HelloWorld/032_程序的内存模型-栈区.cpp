#include <iostream>
#include <string>
#include <thread>
using namespace std;


//ջ������ע�������Ҫ���ؾֲ������ĵ�ַ
//ջ���������ɱ����������ٺ��ͷ�

int* func32(int b) //�β�����Ҳ������ջ��
{
    b = 100;
    int a = 10; //�ֲ������������ջ����ջ���������ں���ִ����������ͷ� 
    return &a; //���ؾֲ������ĵ�ַ
    //return &b; //�����βεĵ�ַ
}

int main32() {
    cout << "032_������ڴ�ģ��-ջ��" << endl;

    int* p = func32(1);
    // ����1����
    std::this_thread::sleep_for(std::chrono::seconds(1));

    cout << *p << endl; // ע�⣺������ݲ���10
    cout << "----------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
