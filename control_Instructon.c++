// If-else ladder

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    /* if((age<18)&&(age>0))
    {
       cout<<"You cannot drive the car"<<endl;
    }
    else if((age>=18)&&(age<=64))
    {
         cout<<"You can drive the car"<<endl;
    }
    else if (age>=75)
    {
        cout<<"You cannot drive the car because you are above 75"<<endl;
    }*/

    // Switch case

    switch (age)
    {
    case 18:
        cout << "Your age is 18" << endl;
        break;

    case 10:
        cout << "Your age is 10" << endl;
        break;

    case 45:
        cout << "Your age is 45" << endl;
        break;

    default:
        cout << "No special cases" << endl;
        break;
    }

    return 0;
}