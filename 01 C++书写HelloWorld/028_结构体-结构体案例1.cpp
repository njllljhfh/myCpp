#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
����1
��������:
ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�
*/
struct Student
{
    string sName;
    int score; //���Է���
};

struct Teacher
{
    string tName;
    Student sArray[5];
};

//����ʦ��ѧ�����Ƶĺ���
void allocateSpace281(struct Teacher tArray[], int len)
{
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; i++)
    {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i];
        for (int j = 0; j < 5; j++)
        {
            tArray[i].sArray[j].sName = "Student_";
            tArray[i].sArray[j].sName += nameSeed[j];
            int random = rand() % 61 + 40;
            tArray[i].sArray[j].score = random;
        }
    }
}

//��ӡ������Ϣ
void printInfo281(struct Teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "��ʦ��������" << tArray[i].tName << endl;

        for (int j = 0; j < 5; j++)
        {
            cout << "\tѧ��������" << tArray[i].sArray[j].sName
                << "���Կ��Է�����" << tArray[i].sArray[j].score << endl;
        }
    }
}

int main28() {
    cout << "028_�ṹ��-�ṹ�尸��1" << endl;

    //��ϵͳʱ�䣬������������ӣ���Ҫͷ�ļ� <ctime>
    srand((unsigned int)time(NULL));

    //Teacher tArray[3];  //��ôд�ᱨ��(ԭ����ʱ����)�� **_Val** �� 0xFFFFFFFFFFFFFFFF��
    Teacher tArray[3] = {};

    int tLen = sizeof(tArray) / sizeof(tArray[0]);
    cout << "��ʦ���鳤�ȣ�" << tLen << endl;
    allocateSpace281(tArray, tLen);
    printInfo281(tArray, tLen);
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
