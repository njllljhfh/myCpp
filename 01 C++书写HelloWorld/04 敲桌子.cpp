#include <iostream>
using namespace std;

// ��λ��7����ʮλ��7����7����
int main() {
	for (int i = 1; i < 101; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
			cout << "������: " << i << endl;
		}
		else {
			cout << i << endl;
		}

	}
	system("pause");
	return 0;
}