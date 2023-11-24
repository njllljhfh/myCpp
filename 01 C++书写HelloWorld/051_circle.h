#pragma once
#include <iostream>
#include "051_point.h"
using namespace std;


class Circle51
{
private:
    int r;
    //在类中可以让另一个类 作为本类中的成员
    Point51 center;
public:
    void setR(int value);
    int getR();
    void setCenter(Point51 p);
    Point51 getCenter();
};

