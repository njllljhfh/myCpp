#include <iostream>
#include <fstream>
#include <string>
using namespace std;


/*
文本文件 读文件
*/


void test91_1()
{
	ifstream ifs;

	ifs.open("091_test1.txt", ios::in);
	//判断是否打开成功
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//第1种读取方式
	char buf[1024] = { 0 }; // 数组初始化为0
	for (int i = 0; i < 5; i++)
	{
		cout << buf[i] << endl;
	}
	cout << "+++++++++++++++++++++++" << endl;

	cout << "第1种读取方式" << endl;
	int i = 1;
	while (ifs >> buf)  //ifs >> buf 读完会返回“假”的标记
	{
		cout << i << endl;
		cout << buf << endl;
		i++;
	}
	cout << buf << endl;
	ifs.close();
	cout << "+++++++++++++++++++++++" << endl;


	//第2种读取方式
	cout << "第2种读取方式" << endl;
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


	//第3种读取方式
	cout << "第3种读取方式" << endl;
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


	//第4种读取方式（不建议使用，速度慢）
	cout << "/第4种读取方式（不建议使用，速度慢）" << endl;
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
	cout << "091_文件操作-文本文件-读文件" << endl << "=======================================================" << endl;
	test91_1();
	cout << "----------------------------------------------------------------" << endl;

	//system("pause");
	cin.get();
	return 0;
}


