#include <iostream>
using namespace std;
class c2;
class c1
{
    int val1;

public:
    void setdata(int a)
    {
        val1 = a;
    }
    friend void exchange(c1 &, c2 &);
    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;

public:
    void setdata(int a)
    {
        val2 = a;
    }
    friend void exchange(c1 &, c2 &);
    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(c1 & x, c2 & y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{

    c1 oc1;
    c2 oc2;

    oc1.setdata(10);
    oc2.setdata(20);
    exchange(oc1,oc2);

    cout<<"The value of oc1 after exchange becomes: ";
    oc1.display();

    cout<<"The value of oc2 after exchange becomes: ";
    oc2.display();



    return 0;
}