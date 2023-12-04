#include <iostream>
using namespace std;


/*
继承
减少重复代码
语法：class 子类 :继承方式 父类


子类：也称为 派生类
父类：也称为 基类
*/

class BasePage75
{
public:
    void header() {
        cout << "首页、公开课、登录、注册。。。（公共头部）" << endl;
    }
    void fotter() {
        cout << "帮助中心、交流合作、站内地图。。。（公共底部）" << endl;
    }
    void left() {
        cout << "Java、Python、C++。。。（公共分类列表）" << endl;
    }
};


class JavaPage75 :public BasePage75
{
public:
    void content()
    {
        cout << "Java 学科视频" << endl;
    }
};


class PythonPage75 :public BasePage75
{
public:
    void content()
    {
        cout << "Python 学科视频" << endl;
    }
};


class CppPage75 :public BasePage75
{
public:
    void content()
    {
        cout << "C++ 学科视频" << endl;
    }
};


void test75_1()
{
    cout << "Java 下载视频页面如下：" << endl;
    JavaPage75 ja;
    ja.header();
    ja.fotter();
    ja.left();
    ja.content();
    cout << "+++++++++++++++++++++++++++++++" << endl;

    cout << "Python 下载视频页面如下：" << endl;
    PythonPage75 py;
    py.header();
    py.fotter();
    py.left();
    py.content();
    cout << "+++++++++++++++++++++++++++++++" << endl;

    cout << "C++ 下载视频页面如下：" << endl;
    CppPage75 cpp;
    cpp.header();
    cpp.fotter();
    cpp.left();
    cpp.content();
}

int main75()
{
    cout << "075_类和对象-继承-基本语法" << endl;
    test75_1();
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
