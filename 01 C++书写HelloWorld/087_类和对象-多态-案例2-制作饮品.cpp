#include <iostream>
using namespace std;


/*
案例2：制作饮品
*/


//抽象基类
class AbstractDrinking87
{
public:
    //煮水
    virtual void boil() = 0;
    //冲泡
    virtual void brew() = 0;
    //导入杯中
    virtual void pourInCup() = 0;
    //加入辅料
    virtual void putSomething() = 0;
    //制作饮品
    virtual void makeDrink()
    {
        boil();
        brew();
        pourInCup();
        putSomething();
    }
};


//制作咖啡
class Coffee87 :public AbstractDrinking87
{
public:
    //煮水
    virtual void boil()
    {
        cout << "煮农夫山泉" << endl;
    }
    //冲泡
    virtual void brew()
    {
        cout << "冲泡咖啡" << endl;
    }
    //导入杯中
    virtual void pourInCup()
    {
        cout << "导入杯中" << endl;
    }
    //加入辅料
    virtual void putSomething()
    {
        cout << "加入糖和牛奶" << endl;
    }
};


//制作茶叶
class Tea87 :public AbstractDrinking87
{
public:
    //煮水
    virtual void boil()
    {
        cout << "煮矿泉水" << endl;
    }
    //冲泡
    virtual void brew()
    {
        cout << "冲泡茶叶" << endl;
    }
    //导入杯中
    virtual void pourInCup()
    {
        cout << "导入杯中" << endl;
    }
    //加入辅料
    virtual void putSomething()
    {
        cout << "加入柠檬" << endl;
    }
};


void doWork(AbstractDrinking87* abs)
{
    abs->makeDrink();
    delete abs; //释放堆区内存
}

void test87_1()
{
    //制作咖啡
    doWork(new Coffee87);
    cout << "+++++++++++++++++++++++++" << endl;

    //制作茶叶
    doWork(new Tea87);
}

int main87()
{
    cout << "087_类和对象-多态-案例2-制作饮品" << endl << "=======================================================" << endl;
    test87_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
