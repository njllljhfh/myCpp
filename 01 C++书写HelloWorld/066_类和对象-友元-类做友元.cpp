#include <iostream>
#include <string>
using namespace std;


class Building66;


class GoodGay66
{
public:
    Building66* building;
    GoodGay66();
    ~GoodGay66();
    void visit(); //�ιۺ��� ���� Building �е�����
};


class Building66
{
    //������Ԫ��GoodGay66�� �� Building66�� �ĺ����ѣ����Է��� Building66�� �е�˽�г�Ա
    friend class GoodGay66;

public:
    string mSittingRoom;
    Building66();

private:
    string mBedRoom;
};


//����д��Ա����
Building66::Building66()
{
    mSittingRoom = "����";
    mBedRoom = "����";
}

GoodGay66::GoodGay66()
{
    //�������������
    building = new Building66;
}

GoodGay66::~GoodGay66()
{
    delete building;
}

void GoodGay66::visit()
{
    cout << "�û����� ���ڷ��ʣ�" << building->mSittingRoom << endl;
    cout << "�û����� ���ڷ��ʣ�" << building->mBedRoom << endl;
}

void test66_1()
{
    GoodGay66 gg;
    gg.visit();
}

int main66()
{
    cout << "066_��Ͷ���-��Ԫ-������Ԫ" << endl;
    test66_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
