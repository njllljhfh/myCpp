#include <iostream>
using namespace std;

int main8() {
	cout << "008_数组-冒泡排序" << endl;


	int arr[] = { 4,2,8,0,5,7,1,3,9,6 };

	bool reverse = false;
	//bool reverse = true;

	int len = sizeof(arr) / sizeof(arr[0]);
	int max_index = len - 1;
	int temp = 0;

	if (not reverse) {
		cout << "正序" << endl;
		for (int i = 0; i < len - 1; i++)
		{
			//每一轮遍历，对相邻元素进行对比，每一轮对比的次数比上一轮少一次
			//大数向右移动
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
		cout << "倒序" << endl;
		for (int i = 0; i < len - 1; i++)
		{
			//大数向左移动
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

	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}