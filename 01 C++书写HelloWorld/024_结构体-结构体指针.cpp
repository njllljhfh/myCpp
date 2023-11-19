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

int main() {
	cout << "024_结构体-结构体指针" << endl;
	Student s = { "张三",18,100 };


	//通过指针指向结构体变量
	Student* p = &s;
	//通过->来访问成员
	p->name = "张三123";
	cout << "name: " << p->name << "  age: " << p->age << "  score: " << p->score << endl;
	cout << "----------------------------------------------------------------" << endl;

	system("pause");
	return 0;
}
