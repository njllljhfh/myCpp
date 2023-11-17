#include <iostream>
using namespace std;

//水仙花数：一个3位数，它的每个位上的数字的3次幂等于它本身
int main3() {
	cout << "003_水仙花数" << endl;

	int num = 100;

	do {
		int a = 0;
		int b = 0;
		int c = 0;
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;
		if (a*a*a  + b*b*b + c*c*c == num) {
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}
