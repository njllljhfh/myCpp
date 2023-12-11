#include <iostream>
#include <fstream>
using namespace std;


/*
二进制文件 写文件
ios::binary
*/


class Person93
{
public:
	char mName[64]; // 对文件进行操作时，这里最好不要用string，用char类型的数组。
	int mAge;
};


void test93_1()
{
	ifstream ifs("092_test1.txt", ios::in | ios::binary); //可以在声明时直接初始化对象

	//判断是否打开成功
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//读文件
	Person93 p;
	ifs.read((char*)&p, sizeof(Person93));

    cout << "姓名：" << p.mName << "，年龄：" << p.mAge << endl;

	ifs.close();
}

int main93()
{
	cout << "093_文件操作-二进制文件-读文件" << endl << "=======================================================" << endl;
	test93_1();
	cout << "----------------------------------------------------------------" << endl;

	//system("pause");
	cin.get();
	return 0;
}
