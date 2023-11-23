#include <iostream>
using namespace std;


//圆周率
const double PI = 3.14;

//设计一个圆类，求圆的周长
//圆周长公式：2 * PI * 半径
class Circle
{
    //访问权限:公共权限
public:
    //属性
    int m_r; //半径

    //行为
    double calculatePerimeter()
    {
        return 2 * PI * m_r;
    }
};

int main45() {
    cout << "045_类和对象-封装-属性和行为作为整体" << endl;

    //通过圆类创建具体的圆（实例化）
    Circle c1;
    //属性赋值
    c1.m_r = 10;

    cout << "圆的周长为：" << c1.calculatePerimeter() << endl;
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
