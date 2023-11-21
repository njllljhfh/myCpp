#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
案例2
案例描述:
设计一个英雄的结构体，包括成员姓名，年龄性别；创建结构体数组，数组中存放5名英雄。
通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
*/
struct Hero
{
    string name;
    int age;
    string gender;
};

void allocateSpace291(Hero arr[], int len)
{
    string nameSuffix = "ABCDE";
    string genders[2] = { "girl","boy" };

    int age;
    for (int i = 0; i < len; i++)
    {
        age = rand() % 101;
        arr[i].name = "Hero_";
        arr[i].name += nameSuffix[i];
        arr[i].age += age;
        arr[i].gender += genders[i % 2];
    }
}

void printInfo291(Hero arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "姓名：" << arr[i].name << "，年龄：" << arr[i].age << "，性别：" << arr[i].gender << endl;
    }
}

//年龄排序
void bubbleSort29(Hero* arr, int len, bool reverse = false)
{
    Hero temp;

    if (not reverse) {
        cout << "正序" << endl;
        for (int i = 0; i < len - 1; i++)
        {
            //每一轮遍历，对相邻元素进行对比，每一轮对比的次数比上一轮少一次
            //大数向右移动
            for (int j = 0; j < len - i - 1; j++)
            {
                if (arr[j].age > arr[j + 1].age)
                {
                    temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    else {
        cout << "倒序" << endl;
        for (int i = 0; i < len - 1; i++)
        {
            //大数向左移动
            for (int j = len - 1; j > i; j--)
            {
                if (arr[j].age > arr[j - 1].age)
                {
                    temp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

int main29() {
    cout << "029_结构体-结构体案例2" << endl;

    //用系统时间，产生随机数种子，需要头文件 <ctime>
    srand((unsigned int)time(NULL));

    //Hero hArray[5]; // 会到时英雄的年龄是负数(原因暂时不详)
    Hero hArray[5] = {};

    int hLen = sizeof(hArray) / sizeof(hArray[0]);
    cout << "组长度：" << hLen << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "根据年龄排序前：" << endl;
    allocateSpace291(hArray, hLen);
    printInfo291(hArray, hLen);
    cout << "----------------------------------------------------------------" << endl;


    cout << "根据年龄排序后-正序：" << endl;
    bubbleSort29(hArray, hLen);
    printInfo291(hArray, hLen);
    cout << "----------------------------------------------------------------" << endl;


    cout << "根据年龄排序后-倒序：" << endl;
    bubbleSort29(hArray, hLen, true);
    printInfo291(hArray, hLen);
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
