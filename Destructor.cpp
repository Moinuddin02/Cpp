#include <iostream>
using namespace std;


int count=0;
class num
{
    public:
    num()
    {
        count++;
        cout<<"This is the time when constructor is called for obj "<<count<<endl;
    }

    ~num()
    {
        cout<<"This is the time when destructor is called for obj "<<count<<endl;
        count--;
    }
};

int main(){
    cout<<"We are inside the maint function "<<endl;
    cout<<"Creating first object"<<endl;
    num n1;
    {
        cout<<"Entering this block "<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting the block"<<endl;
    }
    cout<<"Back to the main"<<endl;

    
    return 0;
}