#include <iostream>
using namespace std;

// 个位有7，或十位有7，或被7整除
int main4() {
    cout << "004_敲桌子" << endl;

    for (int i = 1; i < 101; i++)
    {
        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
            cout << "敲桌子: " << i << endl;
        }
        else {
            cout << i << endl;
        }

    }
    system("pause");
    return 0;
}