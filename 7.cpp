#include <iostream>
using namespace std;

class Y; // Forward Decleration, That means Y is present ahead.
class X
{
    int data;

public:
    void setdata(int value)
    {
        data = value;
    }

    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setdata(int value)
    {
        num = value;
    }

    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "The summing of o1 and o2 is " << o1.data + o2.num;
}

int main()
{
    X a1;
    a1.setdata(2);
    Y b1;
    b1.setdata(2);

    add(a1, b1);
    return 0;
}