#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumrealcomplex(complex, complex);

    int sumcomcomplex(complex, complex);
};

class complex
{
    int a, b;

    // friend int calculator :: sumrealcomplex(complex,complex);
    // friend int calculator :: sumcomcomplex(complex,complex);

    friend class calculator;    // For whole functions.

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printmumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumcomcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(4, 6);
    calculator cal1;
    int res = cal1.sumrealcomplex(o1, o2);
    cout << "The sum of real part number of o1 and o2 is " << res << endl;

    int res1 = cal1.sumcomcomplex(o1, o2);
    cout << "The sum of complex part number of o1 and o2 is " << res1 << endl;
    return 0;
}