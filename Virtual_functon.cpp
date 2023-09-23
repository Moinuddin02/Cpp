#include <iostream>
using namespace std;

class Base
{
public:
   int Basevariable = 100;
   virtual void display()
   {
      cout << "Displaying the Base variable: " << Basevariable << endl;
   }
};

class Derived : public Base
{
public:
   int Derivedvariable = 200;
   void display()

   {
      cout << "Displaying the Base variable: " << Basevariable << endl;
      cout << "Displaying the Derived variable: " << Derivedvariable << endl;
   }
};

int main()
{
   Base *Base_ptr;
   Base base_obj;
   Derived Derived_obj;
   Base_ptr = &Derived_obj;
   Base_ptr->display();
   return 0;
}