#include <iostream>
#include <string>
using namespace std;


/*
��Ԫ������ʵ��
    ȫ�ֺ�������Ԫ
    ������Ԫ
    ��Ա��������Ԫ
*/

class Building65
{
    //ȫ�ֺ�������Ԫ��ȫ�ֺ��� goodGay65 �� Building65��ĺ����ѣ����Է��� Building65�� �е�˽�г�Ա
    friend void goodGay65(Building65* building);

public:

    string mSittingRom;

    Building65()
    {
        mSittingRom = "����";
        mBedRoom = "����";
    }

private:
    string mBedRoom;
};

//ȫ�ֺ���
void goodGay65(Building65* building)
{
    cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->mSittingRom << endl;
    cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->mBedRoom << endl;
}

void test65_1()
{
    Building65 building;
    goodGay65(&building);
}

int main65()
{
    cout << "065_��Ͷ���-��Ԫ-ȫ�ֺ�������Ԫ" << endl;
    test65_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}