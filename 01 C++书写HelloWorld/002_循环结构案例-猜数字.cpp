#include <iostream>
using namespace std;
#include <ctime>

int main2() {
	cout << "�²����֣�" << endl;

	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	//cout << num << endl;

	int val = 0;

	while (1)
	{
		cin >> val;
		if (val > num){
			cout << "�²����" << endl;
		}else if (val < num) {
			cout << "�²��С" << endl;
		}
		else {
			cout << "��ϲ���¶��ˣ���Ϸ������" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}