#include <iostream>
#include <string>
using namespace std;


class Building67;


class GoodGay67
{
public:
    Building67* building;

    GoodGay67();

    void visit(); //让 visit 函数 可以访问 Building 中的私有成员
    void visit2(); //让 visit2 函数 不可以访问 Building 中的私有成员
};


class Building67
{
    //成员函数做友元，GoodGay67类中的visit 成员函数 作为本类的好朋友，可以访问本类的私有成员
    friend void GoodGay67::visit();
public:
    string mSittingRoom;
    Building67();
private:
    string mBedRoom;
};


//类外写成员函数
Building67::Building67()
{
    mSittingRoom = "客厅";
    mBedRoom = "卧室";
}

GoodGay67::GoodGay67()
{
    building = new Building67;
}

void GoodGay67::visit()
{
    cout << "visit 函数正在访问：" << building->mSittingRoom << endl;
    cout << "visit 函数正在访问：" << building->mBedRoom << endl;
}

void GoodGay67::visit2()
{
    cout << "visit2 函数正在访问：" << building->mSittingRoom << endl;
    //cout << "visit2 函数正在访问：" << building->mBedRoom << endl;  // 不可访问私有属性
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
    cout << "067_类和对象-友元-成员函数做友元" << endl;
    test67_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
