#include <iostream>
using namespace std;


//Բ����
const double PI = 3.14;

//���һ��Բ�࣬��Բ���ܳ�
//Բ�ܳ���ʽ��2 * PI * �뾶
class Circle
{
    //����Ȩ��:����Ȩ��
public:
    //����
    int m_r; //�뾶

    //��Ϊ
    double calculatePerimeter()
    {
        return 2 * PI * m_r;
    }
};

int main45() {
    cout << "045_��Ͷ���-��װ-���Ժ���Ϊ��Ϊ����" << endl;

    //ͨ��Բ�ഴ�������Բ��ʵ������
    Circle c1;
    //���Ը�ֵ
    c1.m_r = 10;

    cout << "Բ���ܳ�Ϊ��" << c1.calculatePerimeter() << endl;
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
