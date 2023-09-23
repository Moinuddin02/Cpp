#include <iostream>
using namespace std;

template <class T1, class T2>

class moinuddin
{
public:
    T1 a;
    T2 b;

    moinuddin(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The value if a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    moinuddin<char, float> m('M', 10.88);
    m.display();

    return 0;
}