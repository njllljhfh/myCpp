#include <iostream>
#include <string>
using namespace std;


class Building67;


class GoodGay67
{
public:
    Building67* building;

    GoodGay67();

    void visit(); //�� visit ���� ���Է��� Building �е�˽�г�Ա
    void visit2(); //�� visit2 ���� �����Է��� Building �е�˽�г�Ա
};


class Building67
{
    //��Ա��������Ԫ��GoodGay67���е�visit ��Ա���� ��Ϊ����ĺ����ѣ����Է��ʱ����˽�г�Ա
    friend void GoodGay67::visit();
public:
    string mSittingRoom;
    Building67();
private:
    string mBedRoom;
};


//����д��Ա����
Building67::Building67()
{
    mSittingRoom = "����";
    mBedRoom = "����";
}

GoodGay67::GoodGay67()
{
    building = new Building67;
}

void GoodGay67::visit()
{
    cout << "visit �������ڷ��ʣ�" << building->mSittingRoom << endl;
    cout << "visit �������ڷ��ʣ�" << building->mBedRoom << endl;
}

void GoodGay67::visit2()
{
    cout << "visit2 �������ڷ��ʣ�" << building->mSittingRoom << endl;
    //cout << "visit2 �������ڷ��ʣ�" << building->mBedRoom << endl;  // ���ɷ���˽������
}

void test67_1()
{
    GoodGay67 gg;
    gg.visit();
    cout << "+++++++++++++" << endl;
    gg.visit2();
}

int main67()
{
    cout << "067_��Ͷ���-��Ԫ-��Ա��������Ԫ" << endl;
    test67_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
