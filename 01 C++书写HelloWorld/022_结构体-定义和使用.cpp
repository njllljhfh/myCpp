#include <iostream>
#include <string>
using namespace std;


//结构体定义
struct Student
{
	string name;
	int age;
	int score;
}s3; // s3 方式3：在定义结构体时顺便创建结构体变量（用的少）

int main22() {
	cout << "022_结构体-定义和使用" << endl;

	//方式1：
	struct Student s1;
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名：" << s1.name << "，年龄：" << s1.age << "，分数：" << s1.score << endl;
	cout << "----------------------------------------------------------------" << endl;

	//方式2：
	//struct 关键字可以省略
	//struct Student s2 = { "李四",19,80 };
	Student s2 = { "李四",19,80 };
	cout << "姓名：" << s2.name << "，年龄：" << s2.age << "，分数：" << s2.score << endl;
	cout << "----------------------------------------------------------------" << endl;

	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;
	cout << "姓名：" << s3.name << "，年龄：" << s3.age << "，分数：" << s3.score << endl;
	cout << "----------------------------------------------------------------" << endl;

	system("pause");
	return 0;
}
