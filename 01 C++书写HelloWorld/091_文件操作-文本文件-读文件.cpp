#include <iostream>
#include <fstream>
#include <string>
using namespace std;


/*
�ı��ļ� ���ļ�
*/


void test91_1()
{
	ifstream ifs;

	ifs.open("091_test1.txt", ios::in);
	//�ж��Ƿ�򿪳ɹ�
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//��1�ֶ�ȡ��ʽ
	char buf[1024] = { 0 }; // �����ʼ��Ϊ0
	for (int i = 0; i < 5; i++)
	{
		cout << buf[i] << endl;
	}
	cout << "+++++++++++++++++++++++" << endl;

	cout << "��1�ֶ�ȡ��ʽ" << endl;
	int i = 1;
	while (ifs >> buf)  //ifs >> buf ����᷵�ء��١��ı��
	{
		cout << i << endl;
		cout << buf << endl;
		i++;
	}
	cout << buf << endl;
	ifs.close();
	cout << "+++++++++++++++++++++++" << endl;


	//��2�ֶ�ȡ��ʽ
	cout << "��2�ֶ�ȡ��ʽ" << endl;
	ifs.open("091_test1.txt", ios::in);
	i = 1;
	while (ifs.getline(buf, sizeof(buf)))
	{	
		cout << i << endl;
		cout << buf << endl;
		i++;
	}
	cout << buf << endl;
	ifs.close();
	cout << "+++++++++++++++++++++++" << endl;


	//��3�ֶ�ȡ��ʽ
	cout << "��3�ֶ�ȡ��ʽ" << endl;
	ifs.open("091_test1.txt", ios::in);
	string buf3;
	i = 1;
	while (getline(ifs, buf3))
	{
		cout << i << endl;
		cout << buf3 << endl;
		i++;
	}
	ifs.close();
	cout << buf3 << endl;
	cout << "+++++++++++++++++++++++" << endl;


	//��4�ֶ�ȡ��ʽ��������ʹ�ã��ٶ�����
	cout << "/��4�ֶ�ȡ��ʽ��������ʹ�ã��ٶ�����" << endl;
	char c;
	ifs.open("091_test1.txt", ios::in);
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}
	ifs.close();
}

int main91()
{
	cout << "091_�ļ�����-�ı��ļ�-���ļ�" << endl << "=======================================================" << endl;
	test91_1();
	cout << "----------------------------------------------------------------" << endl;

	//system("pause");
	cin.get();
	return 0;
}


