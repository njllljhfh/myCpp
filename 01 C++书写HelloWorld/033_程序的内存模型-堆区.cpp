#include <iostream>
#include <string>
#include <thread>
using namespace std;


int* func33()
{
    //���� new �ؼ����ֿ��Խ����ݿ��ٵ�����
    //ָ�� p ������Ҳ�� �ֲ�����������ջ�ϣ�ָ�뱣������ݣ�ָ��ָ����ڴ��ַ�����ڶ���
    int* p = new int(10);
    return p;
}

int main33() {
    cout << "033_������ڴ�ģ��-����" << endl;
    //�ڶ�����������
    int* p = func33();

    // ����1����
    std::this_thread::sleep_for(std::chrono::seconds(1));

    cout << *p << endl;
    // ���ˣ����������ݻ�û���ͷ�

    cout << "----------------------------------------------------------------" << endl;


    //system("pause");
    cin.get();
    return 0;
}
