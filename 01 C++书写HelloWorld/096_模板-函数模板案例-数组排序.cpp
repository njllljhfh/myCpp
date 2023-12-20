#include <iostream>
using namespace std;


/*
��������:
    ���ú�Чģ���װһ������ĺ��������ԶԲ�ͬ�������������������
    �������Ӵ�С�������㷨Ϊ ѡ������
    �ֱ����� char���� �� int���� ���в���
*/


//��ӡ����
template<class T>
void printArray96(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (i < len - 1)
        {
            cout << arr[i] << ", ";
        }
        else
        {
            cout << arr[i];
        }
    }
    cout << endl;
}


//����
template<class T>
void mySwap96(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}


//ѡ������
template<class T>
void mySort96(T arr[], int len, bool reverse = false)
{
    for (int i = 0; i < len; i++)
    {
        int minMax = i;
        for (int j = i + 1; j < len; j++)
        {
            if (reverse) {
                //����
                if (arr[j] > arr[minMax])
                {
                    minMax = j;
                }
            }
            else
            {
                //����
                if (arr[j] < arr[minMax])
                {
                    minMax = j;
                }
            }
        }

        if (i != minMax)
        {
            mySwap96(arr[i], arr[minMax]);
        }
    }
}


void test96_1()
{
    cout << "�ַ�������" << endl;
    char charArr[] = "badcfe";
    //����� �ַ��������� ��ʼ����ʽ�൱�����´��롣���������Զ����ַ������ĩβ��� '\0'
    //char charArr[7];
    //charArr[0] = 'b';
    //charArr[1] = 'a';
    //charArr[2] = 'd';
    //charArr[3] = 'c';
    //charArr[4] = 'f';
    //charArr[5] = 'e';
    //charArr[6] = '\0';

    /*
    ���⣺����������Ȳ��� 1 ,����������ʱ����ʹ�ַ��������ӡ�����ǿյģ�����
        ������ڶ��ַ�����������ϡ��� C++ �У��ַ������� null �ַ� ('\0') ��β����Ϊ�ַ����Ľ�����־��
        ���㳢�Զ��ַ������������ʱ�������㷨�Ὣ null �ַ�Ҳ��������
        �����ַ����Ľ��������ƶ�������Ŀ�ͷ���Ӷ�ʹ���ַ���������Ϊ�ա�
    */
    int l = sizeof(charArr) / sizeof(char) - 1;
    cout << "�ַ�������Ϊ��" << l << endl;

    mySort96(charArr, l);
    printArray96(charArr, l);

    mySort96(charArr, l, true);
    printArray96(charArr, l);
}


void test96_2()
{
    cout << "��������" << endl;
    int intArr[] = { 6,4,3,2,5,1 };
    int l = sizeof(intArr) / sizeof(int);
    mySort96(intArr, l);
    printArray96(intArr, l);

    mySort96(intArr, l, true);
    printArray96(intArr, l);
}


int main96()
{
    cout << "096_ģ��-����ģ�尸��-��������" << endl << "=======================================================" << endl;

    test96_1();
    cout << "----------------------------------------------------------------" << endl;

    test96_2();

    //system("pause");
    cin.get();
    return 0;
}

