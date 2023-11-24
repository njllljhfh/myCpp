#include <iostream>
#include <string>
#include "051_point.h"
#include "051_circle.h"
using namespace std;


//案例2：点和圆的关系
//设计一个圆形类（Circle)，和一个点类（Point），计算点和圆的关系。

//将类的声明和实现分别放到对应的 .h 和 .cpp 文件中

//class Point51
//{
//private:
//    int x;
//    int y;
//public:
//    void setX(int value)
//    {
//        x = value;
//    }
//
//    int getX()
//    {
//        return x;
//    }
//
//    void setY(int value)
//    {
//        y = value;
//    }
//
//    int getY()
//    {
//        return y;
//    }
//};
//
//  
//class Circle51
//{
//private:
//    int r;
//    //在类中可以让另一个类 作为本类中的成员
//    Point51 center;
//public:
//    void setR(int value)
//    {
//        r = value;
//    }
//
//    int getR()
//    {
//        return r;
//    }
//
//    void setCenter(Point51 p)
//    {
//        center = p;
//        cout << "Circle center 的地址：" << (long long)&center << endl;
//    }
//
//    Point51 getCenter()
//    {
//        return center;
//    }
//
//};

//判断点和圆的关系
void relationship_between_point_and_circle(Circle51& c, Point51& p)
{
    int distance =
        (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
        (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

    int rSquare = c.getR() * c.getR();

    if (distance == rSquare)
    {
        cout << "点在圆上" << endl;
    }
    else if (distance < rSquare)
    {
        cout << "点在圆内" << endl;
    }
    else
    {
        cout << "点在圆外" << endl;
    }
}

int main() {
    cout << "051_类和对象-封装-案例2-点和圆的关系" << endl;
    cout << "----------------------------------------------------------------" << endl;
    Circle51 c;
    c.setR(10);
    Point51 center;
    cout << "外面 center 的地址：" << (long long)&center << endl;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);

    //3个 center 对象的地址 都不相同
    Point51 p = c.getCenter();
    cout << "外面 c.getCenter() 的地址：" << (long long)&p << endl;
    cout << "----------------------------------------------------------------" << endl;

    Point51 p1;
    p1.setX(10);
    p1.setY(10);
    cout << "p1: ";
    relationship_between_point_and_circle(c, p1);
    cout << "----------------------------------------------------------------" << endl;

    Point51 p2;
    p2.setX(10);
    p2.setY(9);
    cout << "p2: ";
    relationship_between_point_and_circle(c, p2);
    cout << "----------------------------------------------------------------" << endl;

    Point51 p3;
    p3.setX(10);
    p3.setY(11);
    cout << "p3: ";
    relationship_between_point_and_circle(c, p3);
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
