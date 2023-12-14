#include <iostream>
#include <typeinfo>
using namespace std;


int main_typeConversion()
{
    const char* s = "Help" + 3;
    cout << s << endl;
    cout << &s << endl;
    cout << *s << endl;
    cout << sizeof(s) << endl;
    cout << typeid(s).name() << endl;

    int a = 1;
    int* b = &a;
    cout << typeid(b).name() << endl;


    int* const c = &a;
    cout << typeid(c).name() << endl;

    const int* d = &a;
    cout << typeid(d).name() << endl;


    char e = 'Y';
    //*s = e;
    s = &e;
    cout << *s << endl;
    cout << e << endl;

    system("pause");
    return 0;
}