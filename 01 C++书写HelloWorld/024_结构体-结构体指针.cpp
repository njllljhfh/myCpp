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

int main() {
	cout << "024_�ṹ��-�ṹ��ָ��" << endl;
	Student s = { "����",18,100 };


	//ͨ��ָ��ָ��ṹ�����
	Student* p = &s;
	//ͨ��->�����ʳ�Ա
	p->name = "����123";
	cout << "name: " << p->name << "  age: " << p->age << "  score: " << p->score << endl;
	cout << "----------------------------------------------------------------" << endl;

	system("pause");
	return 0;
}
