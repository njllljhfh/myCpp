#include <iostream>
using namespace std;


/*
���μ̳� ����:
    ����������̳�ͬһ������
    ����ĳ����ͬʱ�̳�������������
    ���ּ̳б���Ϊ ���μ̳У����� ��ʯ�̳�


���μ̳� ����:
    1.��̳��˶�������ݣ���ͬ���̳��˶�������ݣ������������գ�ʹ������ʱ���ͻ����������,
    2.���������գ��̳��Զ�������ݼ̳������ݣ��������Դ�˷ѡ���ʵ��������������������ֻ��Ҫһ�ݾͿ��ԡ�


�����ʽ������ ��̳� ������μ̳е�����


���ʽ���
vbptr�������ָ�루virtual base pointer��
vbptr ָ�� vbtable��������
*/



//������
class Animal82
{
public:
    int mAge;
};


// ������̳� ��������μ̳е�����
// �̳�ǰ ���Ϲؼ��� virtual ��Ϊ��̳�
// Animal82 �� ��Ϊ �����
//����
class Sheep82 :virtual public Animal82 {};

//����
class Tuo82 :virtual public Animal82 {};

//������
class SheepTuo82 :public Sheep82, public Tuo82 {};


void test82_1()
{
    SheepTuo82 st;
    st.Sheep82::mAge = 18;
    st.Tuo82::mAge = 28;

    //�����μ̳��У�����������ӵ��ͬ������ʱ����Ҫ��������������
    cout << "st.Sheep82::mAge = " << st.Sheep82::mAge << endl;
    cout << "st.Tuo82::mAge = " << st.Tuo82::mAge << endl;
    cout << "+++++++++++++++++++++++++++++++++++" << endl;

    //������ݣ�mAge��������֪�� ֻ��Ҫһ�ݾͿ��ԣ����μ̳е������������ݣ���Դ�˷�
    //���� ��̳� ������μ̳е�����
    //������̳к� st.mAge ������������
    cout << "st.mAge = " << st.mAge << endl;
    //���� 3 ����ַ��һ����
    cout << &st.mAge << endl;
    cout << &st.Sheep82::mAge << endl;
    cout << &st.Tuo82::mAge << endl;
}

int main82()
{
    cout << "082_��Ͷ���-�̳�-���μ̳����⼰�����ʽ" << endl;
    test82_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
