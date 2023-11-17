#include <iostream>
using namespace std;
#include <ctime>

int main2() {
	cout << "猜测数字：" << endl;

	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	//cout << num << endl;

	int val = 0;

	while (1)
	{
		cin >> val;
		if (val > num){
			cout << "猜测过大" << endl;
		}else if (val < num) {
			cout << "猜测过小" << endl;
		}
		else {
			cout << "恭喜您猜对了，游戏结束。" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}