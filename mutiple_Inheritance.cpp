#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    int set_base1(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    int set_base2(int a)
    {
        base2int = a;
    }
};

class derived : public base1, public base2
{
    public:
    void show()
    {
        cout << "The value of base 1 is " << base1int << endl;
        cout << "The value of base 1 is " << base2int << endl;
        cout << "The sum of these values is: " << base1int + base2int << endl;
    }
};

int main()
{
    derived m1;
    m1.set_base1(10);
    m1.set_base2(10);
    m1.show();  
    return 0;
}