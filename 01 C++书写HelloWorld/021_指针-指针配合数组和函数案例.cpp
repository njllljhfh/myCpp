#include <iostream>
using namespace std;


void bubbleSort(int* arr, int len, bool reverse = false)
{
    int temp;

    if (not reverse) {
        cout << "����" << endl;
        for (int i = 0; i < len - 1; i++)
        {
            //ÿһ�ֱ�����������Ԫ�ؽ��жԱȣ�ÿһ�ֶԱȵĴ�������һ����һ��
            //���������ƶ�
            for (int j = 0; j < len - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    else {
        cout << "����" << endl;
        for (int i = 0; i < len - 1; i++)
        {
            //���������ƶ�
            for (int j = len - 1; j > i; j--)
            {
                if (arr[j] > arr[j - 1])
                {
                    temp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

void printArray(int* arr, int len)
{
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "021_ָ��-ָ���������ͺ�������" << endl;
    cout << "----------------------------------------------------------------" << endl;

    int arr[] = { 4,2,8,0,5,7,1,3,9,6 };
    int len = sizeof(arr) / sizeof(arr[0]);

    //����
    bubbleSort(arr, len, false);
    printArray(arr, len);
    cout << "----------------------------------------------------------------" << endl;

    //����
    bubbleSort(arr, len, true);
    printArray(arr, len);
    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}
