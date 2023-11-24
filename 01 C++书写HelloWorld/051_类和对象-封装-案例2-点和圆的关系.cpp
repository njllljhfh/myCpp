#include <iostream>
#include <string>
#include "051_point.h"
#include "051_circle.h"
using namespace std;


//����2�����Բ�Ĺ�ϵ
//���һ��Բ���ࣨCircle)����һ�����ࣨPoint����������Բ�Ĺ�ϵ��

//�����������ʵ�ֱַ�ŵ���Ӧ�� .h �� .cpp �ļ���

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
//    //�����п�������һ���� ��Ϊ�����еĳ�Ա
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
//        cout << "Circle center �ĵ�ַ��" << (long long)&center << endl;
//    }
//
//    Point51 getCenter()
//    {
//        return center;
//    }
//
//};

//�жϵ��Բ�Ĺ�ϵ
void relationship_between_point_and_circle(Circle51& c, Point51& p)
{
    int distance =
        (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
        (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

    int rSquare = c.getR() * c.getR();

    if (distance == rSquare)
    {
        cout << "����Բ��" << endl;
    }
    else if (distance < rSquare)
    {
        cout << "����Բ��" << endl;
    }
    else
    {
        cout << "����Բ��" << endl;
    }
}

int main() {
    cout << "051_��Ͷ���-��װ-����2-���Բ�Ĺ�ϵ" << endl;
    cout << "----------------------------------------------------------------" << endl;
    Circle51 c;
    c.setR(10);
    Point51 center;
    cout << "���� center �ĵ�ַ��" << (long long)&center << endl;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);

    //3�� center ����ĵ�ַ ������ͬ
    Point51 p = c.getCenter();
    cout << "���� c.getCenter() �ĵ�ַ��" << (long long)&p << endl;
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
