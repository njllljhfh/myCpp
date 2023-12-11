#include <iostream>
#include <fstream>
using namespace std;


/*
�������ļ� д�ļ�
ios::binary
*/


class Person93
{
public:
	char mName[64]; // ���ļ����в���ʱ��������ò�Ҫ��string����char���͵����顣
	int mAge;
};


void test93_1()
{
	ifstream ifs("092_test1.txt", ios::in | ios::binary); //����������ʱֱ�ӳ�ʼ������

	//�ж��Ƿ�򿪳ɹ�
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//���ļ�
	Person93 p;
	ifs.read((char*)&p, sizeof(Person93));

    cout << "������" << p.mName << "�����䣺" << p.mAge << endl;

	ifs.close();
}

int main93()
{
	cout << "093_�ļ�����-�������ļ�-���ļ�" << endl << "=======================================================" << endl;
	test93_1();
	cout << "----------------------------------------------------------------" << endl;

	//system("pause");
	cin.get();
	return 0;
}
