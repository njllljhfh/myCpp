#include <iostream>
#include <string>
using namespace std;


//��ϰ����1:�����������
//�����������(Cube)
//������������������
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����

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
    //��Ա�����ж������������Ƿ����
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
    cout << "050_��Ͷ���-��װ-����1-��������" << endl;
    Cube c1;
    c1.setLength(10);
    c1.setWidth(20);
    c1.setHeight(30);
    cout << "c1 ����� = " << c1.calculateArea() << endl;
    cout << "c1 ����� = " << c1.calculateVolume() << endl;
    cout << "----------------------------------------------------------------" << endl;

    Cube c2;
    c2.setLength(10);
    c2.setWidth(20);
    c2.setHeight(80);
    cout << "c2 ����� = " << c2.calculateArea() << endl;
    cout << "c2 ����� = " << c2.calculateVolume() << endl;
    cout << "----------------------------------------------------------------" << endl;

    //ȫ�ֺ����ж������������Ƿ����
    cout << "ȫ�ֺ����ж� c1 �� c2 �Ƿ����: " << (isSame(c1, c2) ? "��" : "��") << endl;
    cout << "----------------------------------------------------------------" << endl;

    //��Ա�����ж������������Ƿ����
    cout << "��Ա�����ж� c1 �� c2 �Ƿ����: " << (c1.isSameByClass(c2) ? "��" : "��") << endl;
    cout << "----------------------------------------------------------------" << endl;

    //system("pause");
    cin.get();
    return 0;
}
