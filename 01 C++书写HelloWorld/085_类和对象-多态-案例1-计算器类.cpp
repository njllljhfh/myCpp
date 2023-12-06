#include <iostream>
#include <string>
using namespace std;


/*
����1����������
��������:
    �ֱ�������ͨд���Ͷ�̬���������ʵ��������������������ļ�������


��̬���ŵ�:
    ������֯�ṹ����
    �ɶ���ǿ
    ����ǰ�ںͺ��ڵ���չ�Լ�ά��


���������ԭ��
����ԭ�򣺶���չ���⣬���޸Ĺر�
*/

//��ͨд��
class Calculator85
{
public:
    int num1;
    int num2;
    int getResult(string oper)
    {
        if (oper == "+") {
            return num1 + num2;
        }
        else if (oper == "-")
        {
            return num1 - num2;
        }
        else if (oper == "*")
        {
            return num1 * num2;
        }
    }
};


void test85_1()
{
    cout << "��ͨд����" << endl;
    Calculator85 c;
    c.num1 = 10;
    c.num2 = 10;
    cout << c.num1 << " + " << c.num2 << " = " << c.getResult("+") << endl;
    cout << "++++++++++++++" << endl;

    cout << c.num1 << " - " << c.num2 << " = " << c.getResult("-") << endl;
    cout << "++++++++++++++" << endl;

    cout << c.num1 << " * " << c.num2 << " = " << c.getResult("*") << endl;
}
//---------------------------------------------------------------------------------------------


//���ö�̬��ʵ�ּ�����
//�������������
class AbstractCalculator85
{
public:
    int num1;
    int num2;
    virtual int getResult() {
        return 0;
    };
};

//�ӷ�
class AddCalculator85 :public AbstractCalculator85
{
    int getResult()
    {
        return num1 + num2;
    }
};

//����
class SubCalculator85 :public AbstractCalculator85
{
    int getResult()
    {
        return num1 - num2;
    }
};

//�˷�
class MulCalculator85 :public AbstractCalculator85
{
    int getResult()
    {
        return num1 * num2;
    }
};

void test85_2()
{
    cout << "���ö�̬��ʵ�ּ�������" << endl;
    //�� ����� ָ�� �� ���� ָ���������
    //�ӷ�
    AbstractCalculator85* abc = new AddCalculator85;
    abc->num1 = 100;
    abc->num2 = 100;
    cout << abc->num1 << " + " << abc->num2 << " = " << abc->getResult() << endl;
    //�����ǵ�����
    delete abc;
    cout << "+++++++++++++++++++++++++++++" << endl;


    //����
    abc = new SubCalculator85;
    abc->num1 = 100;
    abc->num2 = 100;
    cout << abc->num1 << " - " << abc->num2 << " = " << abc->getResult() << endl;
    delete abc;
    cout << "+++++++++++++++++++++++++++++" << endl;


    //�˷�
    abc = new MulCalculator85;
    abc->num1 = 100;
    abc->num2 = 100;
    cout << abc->num1 << " * " << abc->num2 << " = " << abc->getResult() << endl;
    delete abc;
}

int main85()
{
    cout << "085_��Ͷ���-��̬-����1-��������" << endl << "=======================================================" << endl;
    test85_1();
    cout << "----------------------------------------------------------------" << endl;

    test85_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
