#include <iostream>
#include <string>
using namespace std;


/*
案例3：电脑组装
电脑主要组成部件为 CPU (用于计算) ，显卡(用于显示) ，内存条 (用于存储)
将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如intel厂商和Lenovo厂商
创建电脑类，提供让电脑工作的函数，并且调用每个零件工作的接口
测试时组装三台不同的电脑进行工作J
*/


//抽象不同零件类
//抽象CPU
class Cpu89
{
public:
    virtual void calculate() = 0;
};

//抽象显卡
class VideoCard89
{
public:
    virtual void display() = 0;
};

//抽象内存
class Memory89
{
public:
    virtual void storage() = 0;
};

//电脑
class Computer89
{
public:
    Computer89(Cpu89* cpu, VideoCard89* vc, Memory89* mem)
    {
        mCpu = cpu;
        mVc = vc;
        mMem = mem;
    }

    ~Computer89()
    {
        //cout << "~Computer89 执行了么" << endl;
        if (mCpu != NULL)
        {
            delete mCpu;
            mCpu = NULL;
        }

        if (mVc != NULL)
        {
            delete mVc;
            mVc = NULL;
        }

        if (mMem != NULL)
        {
            delete mMem;
            mMem = NULL;
        }
    }

    // 工作函数
    void work()
    {
        mCpu->calculate();
        mVc->display();
        mMem->storage();
    }

private:
    Cpu89* mCpu;
    VideoCard89* mVc;
    Memory89* mMem;
};

//------------------------------------------------
//具体厂商
// Intel 厂商
class IntelCpu89 :public Cpu89
{
public:
    void calculate() {
        cout << "Intel CPU 在计算" << endl;
    }
};

class IntelVideoCard89 :public VideoCard89
{
public:
    void display() {
        cout << "Intel VideoCard 在显示" << endl;
    }
};

class IntelMemory89 :public Memory89
{
public:
    void storage() {
        cout << "Intel Memory 在存储" << endl;
    }
};

// Lenovo 厂商
class LenovoCpu89 :public Cpu89
{
public:
    void calculate() {
        cout << "Lenovo CPU 在计算" << endl;
    }
};

class LenovoVideoCard89 :public VideoCard89
{
public:
    void display() {
        cout << "Lenovo VideoCard 在显示" << endl;
    }
};

class LenovoMemory89 :public Memory89
{
public:
    void storage() {
        cout << "Lenovo Memory 在存储" << endl;
    }
};

//--------------------------------------------------------------------

void test89_1()
{
    cout << "第 1 台电脑开始工作：" << endl;
    Cpu89* intelCpu = new IntelCpu89;
    VideoCard89* intelVideoCard = new IntelVideoCard89;
    Memory89* intelMemory = new IntelMemory89;
    Computer89* computer1 = new Computer89(intelCpu, intelVideoCard, intelMemory);
    computer1->work();
    delete computer1;
    cout << "+++++++++++++++++++++++++" << endl;


    cout << "第 2 台电脑开始工作：" << endl;
    Computer89* computer2 = new Computer89(new LenovoCpu89, new LenovoVideoCard89, new LenovoMemory89);
    computer2->work();
    delete computer2;
    cout << "+++++++++++++++++++++++++" << endl;


    cout << "第 3 台电脑开始工作：" << endl;
    Computer89* computer3 = new Computer89(new LenovoCpu89, new IntelVideoCard89, new LenovoMemory89);
    computer3->work();
    delete computer3;
}

int main89()
{
    cout << "089_类和对象-多态-案例3-电脑组装" << endl << "=======================================================" << endl;
    test89_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
