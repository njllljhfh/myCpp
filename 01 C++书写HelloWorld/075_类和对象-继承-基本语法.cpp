#include <iostream>
using namespace std;


/*
�̳�
�����ظ�����
�﷨��class ���� :�̳з�ʽ ����


���ࣺҲ��Ϊ ������
���ࣺҲ��Ϊ ����
*/

class BasePage75
{
public:
    void header() {
        cout << "��ҳ�������Ρ���¼��ע�ᡣ����������ͷ����" << endl;
    }
    void fotter() {
        cout << "�������ġ�����������վ�ڵ�ͼ�������������ײ���" << endl;
    }
    void left() {
        cout << "Java��Python��C++�����������������б�" << endl;
    }
};


class JavaPage75 :public BasePage75
{
public:
    void content()
    {
        cout << "Java ѧ����Ƶ" << endl;
    }
};


class PythonPage75 :public BasePage75
{
public:
    void content()
    {
        cout << "Python ѧ����Ƶ" << endl;
    }
};


class CppPage75 :public BasePage75
{
public:
    void content()
    {
        cout << "C++ ѧ����Ƶ" << endl;
    }
};


void test75_1()
{
    cout << "Java ������Ƶҳ�����£�" << endl;
    JavaPage75 ja;
    ja.header();
    ja.fotter();
    ja.left();
    ja.content();
    cout << "+++++++++++++++++++++++++++++++" << endl;

    cout << "Python ������Ƶҳ�����£�" << endl;
    PythonPage75 py;
    py.header();
    py.fotter();
    py.left();
    py.content();
    cout << "+++++++++++++++++++++++++++++++" << endl;

    cout << "C++ ������Ƶҳ�����£�" << endl;
    CppPage75 cpp;
    cpp.header();
    cpp.fotter();
    cpp.left();
    cpp.content();
}

int main75()
{
    cout << "075_��Ͷ���-�̳�-�����﷨" << endl;
    test75_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
