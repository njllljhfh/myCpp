#include <iostream>
#include <string>
using namespace std;


//练习案例1:设计立方体类
//设计立方体类(Cube)
//求出立方体的面积和体积
//分别用全局函数和成员函数判断两个立方体是否相等

class Cube
{
private:
    int length;
    int width;
    int height;

public:
    void setLength(int l)
    {
        length = l;
    }

    int getLength()
    {
        return length;
    }

    void setWidth(int w)
    {
        width = w;
    }

    int getWidth()
    {
        return width;
    }

    void setHeight(int h)
    {
        height = h;
    }

    int getHeight()
    {
        return height;
    }

    int calculateArea()
    {
        return 2 * (length * width + height * length + height * width);
    }

    int calculateVolume()
    {
        return length * width * height;
    }
    //成员函数判断两个立方体是否相等
    bool isSameByClass(Cube& c)
    {
        if (length == c.getLength() && width == c.getWidth() && height == c.getHeight()) {
            return true;
        }
        else
        {
            return false;
        }
    }
};

bool isSame(Cube& c1, Cube& c2)
{
    if (c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth() && c1.getHeight() == c2.getHeight()) {
        return true;
    }
    else
    {
        return false;
    }
}

int main50() {
    cout << "050_类和对象-封装-案例1-立方体类" << endl;
    Cube c1;
    c1.setLength(10);
    c1.setWidth(20);
    c1.setHeight(30);
    cout << "c1 的面积 = " << c1.calculateArea() << endl;
    cout << "c1 的体积 = " << c1.calculateVolume() << endl;
    cout << "----------------------------------------------------------------" << endl;

    Cube c2;
    c2.setLength(10);
    c2.setWidth(20);
    c2.setHeight(80);
    cout << "c2 的面积 = " << c2.calculateArea() << endl;
    cout << "c2 的体积 = " << c2.calculateVolume() << endl;
    cout << "----------------------------------------------------------------" << endl;

    //全局函数判断两个立方体是否相等
    cout << "全局函数判断 c1 和 c2 是否相等: " << (isSame(c1, c2) ? "是" : "否") << endl;
    cout << "----------------------------------------------------------------" << endl;

    //成员函数判断两个立方体是否相等
    cout << "成员函数判断 c1 和 c2 是否相等: " << (c1.isSameByClass(c2) ? "是" : "否") << endl;
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
