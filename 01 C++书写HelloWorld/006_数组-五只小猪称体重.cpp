#include <iostream>
using namespace std;

// �ҳ����ص�С��
int main6() {
	cout << "006_����-��ֻС�������" << endl;

	int arr[5] = { 300,350,200,400,250 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int max_num = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > max_num)
		{
			max_num = arr[i];
		}
	}
	cout << "���ص�С������Ϊ��" << max_num << endl;
	system("pause");
	return 0;
}