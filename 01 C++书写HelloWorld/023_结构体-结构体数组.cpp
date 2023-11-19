#include <iostream>
#include <string>
using namespace std;


//结构体定义
struct Student
{
	string name;
	int age;
	int score;
};

int main23() {
	cout << "023_结构体-结构体数组" << endl;
	//创建结构体数组
	struct Student stuArray[3] = {
		{"张三",18.100},
		{"李四",28.99},
		{"王五",38.66}
	};

	//给结构体数组中的元素赋值
	stuArray[0].name = "赵六";
	stuArray[0].age = 80;
	stuArray[0].score = 60;

	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << stuArray[i].name
			<< " 年龄：" << stuArray[i].age
			<< " 分数：" << stuArray[i].score << endl;
	}

	cout << "----------------------------------------------------------------" << endl;
	system("pause");
	return 0;
}
