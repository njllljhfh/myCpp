#include <iostream>
#include <string>
using namespace std;


/*
友元的三种实现
    全局函数做友元
    类做友元
    成员函数做友元
*/

class Building65
{
    //全局函数做友元，全局函数 goodGay65 是 Building65类的好朋友，可以访问 Building65类 中的私有成员
    friend void goodGay65(Building65* building);

public:

    string mSittingRom;

    Building65()
    {
        mSittingRom = "客厅";
        mBedRoom = "卧室";
    }

private:
    string mBedRoom;
};

//全局函数
void goodGay65(Building65* building)
{
    cout << "好基友全局函数 正在访问：" << building->mSittingRom << endl;
    cout << "好基友全局函数 正在访问：" << building->mBedRoom << endl;
}

void test65_1()
{
    Building65 building;
    goodGay65(&building);
}

int main65()
{
    cout << "065_类和对象-友元-全局函数做友元" << endl;
    test65_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}