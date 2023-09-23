#include <iostream>
using namespace std;

struct moinuddin
{
    int id;
    char fff;
    float salary;
};


int main(){
    struct moinuddin m;
    m.id=10;
    m.fff='x';
    m.salary=12000000;
    cout<<"The id is "<<m.id;
    return 0;
}