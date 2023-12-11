#include <iostream>
#include <fstream>
#include <string>
using namespace std;


/*
二进制文件 写文件
ios::binary
*/


class Person92
{
public:
	char mName[64]; // 对文件进行操作时，这里最好不要用string，用char类型的数组。
	int mAge;
};


void test92_1()
{
	ofstream ofs("092_test1.txt", ios::out | ios::binary); //可以在声明时直接初始化对象
	//ofs.open("92_test1.txt", ios::out | ios::binary);

	Person92 p = { "张三", 18 };

	ofs.write((const char *)&p, sizeof(Person92));

	ofs.close();
}

int main92()
{
	cout << "092_文件操作-二进制文件-写文件" << endl << "=======================================================" << endl;
	test92_1();
	cout << "----------------------------------------------------------------" << endl;

	//system("pause");
	cin.get();
	return 0;
}
