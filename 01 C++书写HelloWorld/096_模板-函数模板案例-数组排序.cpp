#include <iostream>
using namespace std;


/*
案例描述:
    利用函效模板封装一个排序的函数，可以对不同数据类型数组进行排序
    排序规则从大到小，排序算法为 选择排序
    分别利用 char数组 和 int数组 进行测试
*/


//打印数组
template<class T>
void printArray96(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (i < len - 1)
        {
            cout << arr[i] << ", ";
        }
        else
        {
            cout << arr[i];
        }
    }
    cout << endl;
}


//交换
template<class T>
void mySwap96(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}


//选择排序
template<class T>
void mySort96(T arr[], int len, bool reverse = false)
{
    for (int i = 0; i < len; i++)
    {
        int minMax = i;
        for (int j = i + 1; j < len; j++)
        {
            if (reverse) {
                //降序
                if (arr[j] > arr[minMax])
                {
                    minMax = j;
                }
            }
            else
            {
                //升序
                if (arr[j] < arr[minMax])
                {
                    minMax = j;
                }
            }
        }

        if (i != minMax)
        {
            mySwap96(arr[i], arr[minMax]);
        }
    }
}


void test96_1()
{
    cout << "字符串排序：" << endl;
    char charArr[] = "badcfe";
    //上面的 字符串字面量 初始化方式相当于如下代码。编译器会自动在字符数组的末尾添加 '\0'
    //char charArr[7];
    //charArr[0] = 'b';
    //charArr[1] = 'a';
    //charArr[2] = 'd';
    //charArr[3] = 'c';
    //charArr[4] = 'f';
    //charArr[5] = 'e';
    //charArr[6] = '\0';

    /*
    问题：这里如果长度不减 1 ,在升序排序时，会使字符串数组打印出来是空的！！！
        问题出在对字符数组的排序上。在 C++ 中，字符数组以 null 字符 ('\0') 结尾，作为字符串的结束标志。
        当你尝试对字符数组进行排序时，排序算法会将 null 字符也参与排序，
        导致字符串的结束符被移动到数组的开头，从而使得字符串看起来为空。
    */
    int l = sizeof(charArr) / sizeof(char) - 1;
    cout << "字符串长度为：" << l << endl;

    mySort96(charArr, l);
    printArray96(charArr, l);

    mySort96(charArr, l, true);
    printArray96(charArr, l);
}


void test96_2()
{
    cout << "整数排序：" << endl;
    int intArr[] = { 6,4,3,2,5,1 };
    int l = sizeof(intArr) / sizeof(int);
    mySort96(intArr, l);
    printArray96(intArr, l);

    mySort96(intArr, l, true);
    printArray96(intArr, l);
}


int main96()
{
    cout << "096_模板-函数模板案例-数组排序" << endl << "=======================================================" << endl;

    test96_1();
    cout << "----------------------------------------------------------------" << endl;

    test96_2();

    //system("pause");
    cin.get();
    return 0;
}

