#include <iostream>
#include <string>
using namespace std;


//�ṹ�嶨��
struct Student
{
	string name;
	int age;
	int score;
}s3; // s3 ��ʽ3���ڶ���ṹ��ʱ˳�㴴���ṹ��������õ��٣�

int main22() {
	cout << "022_�ṹ��-�����ʹ��" << endl;

	//��ʽ1��
	struct Student s1;
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	cout << "������" << s1.name << "�����䣺" << s1.age << "��������" << s1.score << endl;
	cout << "----------------------------------------------------------------" << endl;

	//��ʽ2��
	//struct �ؼ��ֿ���ʡ��
	//struct Student s2 = { "����",19,80 };
	Student s2 = { "����",19,80 };
	cout << "������" << s2.name << "�����䣺" << s2.age << "��������" << s2.score << endl;
	cout << "----------------------------------------------------------------" << endl;

	s3.name = "����";
	s3.age = 20;
	s3.score = 60;
	cout << "������" << s3.name << "�����䣺" << s3.age << "��������" << s3.score << endl;
	cout << "----------------------------------------------------------------" << endl;

	system("pause");
	return 0;
}
