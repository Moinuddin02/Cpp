#include <iostream>
using namespace std;

class Baseclass
{

public:
    int Base_variable;
    void display()
    {
        cout << "Displaying Base class variable: " << Base_variable << endl;
    }
};

class Derivedclass : public Baseclass
{

public:
    int Derived_variable;
    void display()
    {
        cout << "Displaying Derived class variable: " << Derived_variable << endl;
        cout << "Displaying Base class variable: " << Base_variable << endl;
    }
};

int main()
{
    Baseclass *Baseptr;
    Baseclass Base_obj;
    Derivedclass Derived_obj;
    Baseptr = &Derived_obj;
    Baseptr->Base_variable = 100;
    Baseptr->display();
    Derivedclass*Derived_ptr;
    Derived_ptr = & Derived_obj;
    Derived_ptr->Base_variable=200;
    Derived_ptr->Derived_variable=300;
    Derived_ptr->display();

    return 0;
}