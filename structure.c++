#include <iostream>
using namespace std;

// typedef struct employee
// {
//     int id;
//     char name;
//     float salary;
//     int Phone_Number;
// }moin;


// Union --> It provide better memory management 
union moin
{
    int id;
    char name;
    float salary;
};


int main()
{
    // moin moinuddin;

    // moinuddin.id = 61;
    // moinuddin.name = 'M';
    // moinuddin.salary = 88.80;
    // moinuddin.Phone_Number = 123;

    // cout << "The empolyee id is " << moinuddin.id << endl;
    // cout << "The empolyee name is " << moinuddin.name << endl;
    // cout << "The empolyee salary is " << moinuddin.salary << endl;
    // cout << "The empolyee phone Number is " << moinuddin.Phone_Number << endl;


    
    union moin m1;
    m1.id=61;
    //m1.name='M';
   // m1.salary=77.77;

   cout<<m1.id;

    return 0;
}