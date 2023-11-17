#include <iostream>
using namespace std;

int main7() {
	cout << "007_Êý×é-ÔªËØÄæÖÃ" << endl;

	int arr[5] = { 1,2,3,4,5 };
	//int arr[6] = { 1,2,3,4,5,6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int max_index = len - 1;
	int temp = 0;
	for (int i = 0; i < len / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[max_index - i];
		arr[max_index - i] = temp;
	}

	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}