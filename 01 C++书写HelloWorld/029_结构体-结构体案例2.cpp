#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
����2
��������:
���һ��Ӣ�۵Ľṹ�壬������Ա�����������Ա𣻴����ṹ�����飬�����д��5��Ӣ�ۡ�
ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����
*/
struct Hero
{
    string name;
    int age;
    string gender;
};

void allocateSpace291(Hero arr[], int len)
{
    string nameSuffix = "ABCDE";
    string genders[2] = { "girl","boy" };

    int age;
    for (int i = 0; i < len; i++)
    {
        age = rand() % 101;
        arr[i].name = "Hero_";
        arr[i].name += nameSuffix[i];
        arr[i].age += age;
        arr[i].gender += genders[i % 2];
    }
}

void printInfo291(Hero arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "������" << arr[i].name << "�����䣺" << arr[i].age << "���Ա�" << arr[i].gender << endl;
    }
}

//��������
void bubbleSort29(Hero* arr, int len, bool reverse = false)
{
    Hero temp;

    if (not reverse) {
        cout << "����" << endl;
        for (int i = 0; i < len - 1; i++)
        {
            //ÿһ�ֱ�����������Ԫ�ؽ��жԱȣ�ÿһ�ֶԱȵĴ�������һ����һ��
            //���������ƶ�
            for (int j = 0; j < len - i - 1; j++)
            {
                if (arr[j].age > arr[j + 1].age)
                {
                    temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    else {
        cout << "����" << endl;
        for (int i = 0; i < len - 1; i++)
        {
            //���������ƶ�
            for (int j = len - 1; j > i; j--)
            {
                if (arr[j].age > arr[j - 1].age)
                {
                    temp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

int main29() {
    cout << "029_�ṹ��-�ṹ�尸��2" << endl;

    //��ϵͳʱ�䣬������������ӣ���Ҫͷ�ļ� <ctime>
    srand((unsigned int)time(NULL));

    //Hero hArray[5]; // �ᵽʱӢ�۵������Ǹ���(ԭ����ʱ����)
    Hero hArray[5] = {};

    int hLen = sizeof(hArray) / sizeof(hArray[0]);
    cout << "�鳤�ȣ�" << hLen << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "������������ǰ��" << endl;
    allocateSpace291(hArray, hLen);
    printInfo291(hArray, hLen);
    cout << "----------------------------------------------------------------" << endl;


    cout << "�������������-����" << endl;
    bubbleSort29(hArray, hLen);
    printInfo291(hArray, hLen);
    cout << "----------------------------------------------------------------" << endl;


    cout << "�������������-����" << endl;
    bubbleSort29(hArray, hLen, true);
    printInfo291(hArray, hLen);
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
