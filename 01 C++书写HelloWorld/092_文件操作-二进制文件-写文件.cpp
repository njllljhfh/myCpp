#include <iostream>
#include <fstream>
#include <string>
using namespace std;


/*
�������ļ� д�ļ�
ios::binary
*/


class Person92
{
public:
	char mName[64]; // ���ļ����в���ʱ��������ò�Ҫ��string����char���͵����顣
	int mAge;
};


void test92_1()
{
	ofstream ofs("092_test1.txt", ios::out | ios::binary); //����������ʱֱ�ӳ�ʼ������
	//ofs.open("92_test1.txt", ios::out | ios::binary);

	Person92 p = { "����", 18 };

	ofs.write((const char *)&p, sizeof(Person92));

	ofs.close();
}

int main92()
{
	cout << "092_�ļ�����-�������ļ�-д�ļ�" << endl << "=======================================================" << endl;
	test92_1();
	cout << "----------------------------------------------------------------" << endl;

	//system("pause");
	cin.get();
	return 0;
}
