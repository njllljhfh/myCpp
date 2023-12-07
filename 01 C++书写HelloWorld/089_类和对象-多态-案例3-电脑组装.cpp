#include <iostream>
#include <string>
using namespace std;


/*
����3��������װ
������Ҫ��ɲ���Ϊ CPU (���ڼ���) ���Կ�(������ʾ) ���ڴ��� (���ڴ洢)
��ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ�����������intel���̺�Lenovo����
���������࣬�ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�
����ʱ��װ��̨��ͬ�ĵ��Խ��й���J
*/


//����ͬ�����
//����CPU
class Cpu89
{
public:
    virtual void calculate() = 0;
};

//�����Կ�
class VideoCard89
{
public:
    virtual void display() = 0;
};

//�����ڴ�
class Memory89
{
public:
    virtual void storage() = 0;
};

//����
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
        //cout << "~Computer89 ִ����ô" << endl;
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

    // ��������
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
//���峧��
// Intel ����
class IntelCpu89 :public Cpu89
{
public:
    void calculate() {
        cout << "Intel CPU �ڼ���" << endl;
    }
};

class IntelVideoCard89 :public VideoCard89
{
public:
    void display() {
        cout << "Intel VideoCard ����ʾ" << endl;
    }
};

class IntelMemory89 :public Memory89
{
public:
    void storage() {
        cout << "Intel Memory �ڴ洢" << endl;
    }
};

// Lenovo ����
class LenovoCpu89 :public Cpu89
{
public:
    void calculate() {
        cout << "Lenovo CPU �ڼ���" << endl;
    }
};

class LenovoVideoCard89 :public VideoCard89
{
public:
    void display() {
        cout << "Lenovo VideoCard ����ʾ" << endl;
    }
};

class LenovoMemory89 :public Memory89
{
public:
    void storage() {
        cout << "Lenovo Memory �ڴ洢" << endl;
    }
};

//--------------------------------------------------------------------

void test89_1()
{
    cout << "�� 1 ̨���Կ�ʼ������" << endl;
    Cpu89* intelCpu = new IntelCpu89;
    VideoCard89* intelVideoCard = new IntelVideoCard89;
    Memory89* intelMemory = new IntelMemory89;
    Computer89* computer1 = new Computer89(intelCpu, intelVideoCard, intelMemory);
    computer1->work();
    delete computer1;
    cout << "+++++++++++++++++++++++++" << endl;


    cout << "�� 2 ̨���Կ�ʼ������" << endl;
    Computer89* computer2 = new Computer89(new LenovoCpu89, new LenovoVideoCard89, new LenovoMemory89);
    computer2->work();
    delete computer2;
    cout << "+++++++++++++++++++++++++" << endl;


    cout << "�� 3 ̨���Կ�ʼ������" << endl;
    Computer89* computer3 = new Computer89(new LenovoCpu89, new IntelVideoCard89, new LenovoMemory89);
    computer3->work();
    delete computer3;
}

int main89()
{
    cout << "089_��Ͷ���-��̬-����3-������װ" << endl << "=======================================================" << endl;
    test89_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
