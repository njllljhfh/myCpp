#include <iostream>
using namespace std;

// 找出最重的小猪
int main6() {
	cout << "006_数组-五只小猪称体重" << endl;

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
	cout << "最重的小猪体重为：" << max_num << endl;
	system("pause");
	return 0;
}