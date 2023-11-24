#pragma once
#include <iostream>
using namespace std;


//#pragma once 防止头文件重复包含

//点类声明
class Point51
{
private:
    int x;
    int y;
public:
    void setX(int value);
    int getX();
    void setY(int value);
    int getY();
};
