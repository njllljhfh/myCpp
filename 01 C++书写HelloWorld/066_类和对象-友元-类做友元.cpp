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
    void visit(); //参观函数 访问 Building 中的属性
};


class Building66
{
    //类做友元，GoodGay66类 是 Building66类 的好朋友，可以访问 Building66类 中的私有成员
    friend class GoodGay66;

public:
    string mSittingRoom;
    Building66();

private:
    string mBedRoom;
};


//类外写成员函数
Building66::Building66()
{
    mSittingRoom = "客厅";
    mBedRoom = "卧室";
}

GoodGay66::GoodGay66()
{
    //创建建筑物对象
    building = new Building66;
}

GoodGay66::~GoodGay66()
{
    delete building;
}

void GoodGay66::visit()
{
    cout << "好基友类 正在访问：" << building->mSittingRoom << endl;
    cout << "好基友类 正在访问：" << building->mBedRoom << endl;
}

void test66_1()
{
    GoodGay66 gg;
    gg.visit();
}

int main66()
{
    cout << "066_类和对象-友元-类做友元" << endl;
    test66_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
