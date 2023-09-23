#include <iostream>
using namespace std;

class base
{
    protected:
    int a;
    public:
    int b;
};

class derived : public base
{

};
int main(){
    base b;
    cout<<b.b;
    derived d;
    
    return 0;
}