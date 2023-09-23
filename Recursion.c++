#include <iostream>
using namespace std;

int fac(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    int b = a * fac(a - 1);
    return b;
}

int main()
{
    int a;
    cout << "Enter the factorial of a" << endl;
    cin >> a;
    cout << "The value of " << a  << " is " << fac(a) << endl;
    return 0;
}