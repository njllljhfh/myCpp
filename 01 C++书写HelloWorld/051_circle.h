#pragma once
#include <iostream>
#include "051_point.h"
using namespace std;


class Circle51
{
private:
    int r;
    //�����п�������һ���� ��Ϊ�����еĳ�Ա
    Point51 center;
public:
    void setR(int value);
    int getR();
    void setCenter(Point51 p);
    Point51 getCenter();
};

