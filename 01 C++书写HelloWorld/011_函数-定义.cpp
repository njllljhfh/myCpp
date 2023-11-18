#include <iostream>
using namespace std;
#include <string>

void xxx()
{
    cout << "xxx" << endl;
}


int add(int num1, int num2)
{
    xxx();
    int sum = num1 + num2;
    return sum;
}


int main11() {
    cout << "011_º¯Êý-¶¨Òå" << endl;

    int a = 1, b = 2;
    int c = add(1, 2);
    cout << c << endl;
    cout << "----------------------------------------------------------------" << endl;

    system("pause");
    return 0;
}