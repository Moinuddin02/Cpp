#include <iostream>
using namespace std;

class complex
{
    int real, complex;

public:
    void setdata(int a, int b)
    {
        real = a;
        complex = b;
    }
    void getdata(void)
    {
        cout << "The value of real part is " << real << endl;
        cout << "The value of complex part is " << complex << endl;
    }
};

int main()
{
    complex c;
    complex *ptr =&c;
    ptr->setdata(100,200);
    ptr->getdata();
    return 0;
}