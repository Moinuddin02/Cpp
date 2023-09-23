#include <iostream>
using namespace std;

// Base class
class employee
{
public:
    int id;
    float salary;
    employee(){};
    employee(int id1)
    {
        id = id1;
        salary = 30.1;
    }
};

// Derived Class

class employee1 : public employee
{
public:
    employee1(int id1)
    {
        id = id1;
    }
    int languagecode = 100;

    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{

    employee moin(1), sana(2);
    cout << moin.salary << endl;
    cout << sana.salary << endl;
    employee1 mom(110);
    cout << mom.languagecode << endl;
    cout << mom.id << endl;
    

    return 0;
}