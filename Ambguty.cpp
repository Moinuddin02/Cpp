#include <iostream>
using namespace std;

class base1
{
public:
    void say()
    {
        cout << "Hello :)" << endl;
    }
};

class base2
{
public:
    void say()
    {
        cout << "Good Morning " << endl;
    }
};

class derived : public base1, public base2
{

    int a;
    public:
    void say()
    {
        base2::say();
    }

};
int main()
{
    
    derived d;
    d.say();
    return 0;
}