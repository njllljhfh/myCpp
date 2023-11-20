#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
案例1
案例描述:
学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
最终打印出老师数据以及老师所带的学生数据。
*/
struct Student
{
    string sName;
    int score; //考试分数
};

struct Teacher
{
    string tName;
    Student sArray[5];
};

//给老师和学生复制的函数
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

//打印所有信息
void printInfo281(struct Teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "老师的姓名：" << tArray[i].tName << endl;

        for (int j = 0; j < 5; j++)
        {
            cout << "\t学生姓名：" << tArray[i].sArray[j].sName
                << "考试考试分数：" << tArray[i].sArray[j].score << endl;
        }
    }
}

int main28() {
    cout << "028_结构体-结构体案例1" << endl;

    //用系统时间，产生随机数种子，需要头文件 <ctime>
    srand((unsigned int)time(NULL));

    //Teacher tArray[3];  //这么写会报错(原因暂时不详)： **_Val** 是 0xFFFFFFFFFFFFFFFF。
    Teacher tArray[3] = {};

    int tLen = sizeof(tArray) / sizeof(tArray[0]);
    cout << "老师数组长度：" << tLen << endl;
    allocateSpace281(tArray, tLen);
    printInfo281(tArray, tLen);
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
