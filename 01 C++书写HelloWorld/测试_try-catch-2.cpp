#include <iostream>
#include <exception>
using namespace std;

struct MyException : public exception
{
    const char* what() const throw ()
    {
        return "C++ Exception";
    }
};

int main_try_catch_2()
{
    try
    {
        throw MyException();
    }
    catch (MyException& e)
    {
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        //ÆäËûµÄ´íÎó
    }
}