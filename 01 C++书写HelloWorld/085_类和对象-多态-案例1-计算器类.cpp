#include <iostream>
#include <string>
using namespace std;


/*
案例1：计算器类
案例描述:
    分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类


多态的优点:
    代码组织结构清晰
    可读性强
    利于前期和后期的扩展以及维护


面向对象编程原则
开闭原则：对扩展开封，对修改关闭
*/

//普通写法
class Calculator85
{
public:
    int num1;
    int num2;
    int getResult(string oper)
    {
        if (oper == "+") {
            return num1 + num2;
        }
        else if (oper == "-")
        {
            return num1 - num2;
        }
        else if (oper == "*")
        {
            return num1 * num2;
        }
    }
};


void test85_1()
{
    cout << "普通写法：" << endl;
    Calculator85 c;
    c.num1 = 10;
    c.num2 = 10;
    cout << c.num1 << " + " << c.num2 << " = " << c.getResult("+") << endl;
    cout << "++++++++++++++" << endl;

    cout << c.num1 << " - " << c.num2 << " = " << c.getResult("-") << endl;
    cout << "++++++++++++++" << endl;

    cout << c.num1 << " * " << c.num2 << " = " << c.getResult("*") << endl;
}
//---------------------------------------------------------------------------------------------


//利用多态来实现计算器
//计算器抽象基类
class AbstractCalculator85
{
public:
    int num1;
    int num2;
    virtual int getResult() {
        return 0;
    };
};

//加法
class AddCalculator85 :public AbstractCalculator85
{
    int getResult()
    {
        return num1 + num2;
    }
};

//减法
class SubCalculator85 :public AbstractCalculator85
{
    int getResult()
    {
        return num1 - num2;
    }
};

//乘法
class MulCalculator85 :public AbstractCalculator85
{
    int getResult()
    {
        return num1 * num2;
    }
};

void test85_2()
{
    cout << "利用多态来实现计算器：" << endl;
    //用 父类的 指针 或 引用 指向子类对象
    //加法
    AbstractCalculator85* abc = new AddCalculator85;
    abc->num1 = 100;
    abc->num2 = 100;
    cout << abc->num1 << " + " << abc->num2 << " = " << abc->getResult() << endl;
    //用完后记得销毁
    delete abc;
    cout << "+++++++++++++++++++++++++++++" << endl;


    //减法
    abc = new SubCalculator85;
    abc->num1 = 100;
    abc->num2 = 100;
    cout << abc->num1 << " - " << abc->num2 << " = " << abc->getResult() << endl;
    delete abc;
    cout << "+++++++++++++++++++++++++++++" << endl;


    //乘法
    abc = new MulCalculator85;
    abc->num1 = 100;
    abc->num2 = 100;
    cout << abc->num1 << " * " << abc->num2 << " = " << abc->getResult() << endl;
    delete abc;
}

int main85()
{
    cout << "085_类和对象-多态-案例1-计算器类" << endl << "=======================================================" << endl;
    test85_1();
    cout << "----------------------------------------------------------------" << endl;

    test85_2();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
