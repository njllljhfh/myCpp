#include <iostream>
#include <string>
using namespace std;


//�ṹ�嶨��
struct Student
{
	string name;
	int age;
	int score;
};

int main23() {
	cout << "023_�ṹ��-�ṹ������" << endl;
	//�����ṹ������
	struct Student stuArray[3] = {
		{"����",18.100},
		{"����",28.99},
		{"����",38.66}
	};

	//���ṹ�������е�Ԫ�ظ�ֵ
	stuArray[0].name = "����";
	stuArray[0].age = 80;
	stuArray[0].score = 60;

	for (int i = 0; i < 3; i++)
	{
		cout << "������" << stuArray[i].name
			<< " ���䣺" << stuArray[i].age
			<< " ������" << stuArray[i].score << endl;
	}

	cout << "----------------------------------------------------------------" << endl;
	system("pause");
	return 0;
}
