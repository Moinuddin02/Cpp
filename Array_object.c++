/* #include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

    public:

    void setid(void)
    {
        salary=120;
        cout<<"Enter the id of employee "<<endl;
        cin>>id;
    }

    void getid(void)
    {
        cout<<"The id of employee is "<<id<<endl;
    }
};


int main(){

    employee moinuddin[5];

    for (int i = 0; i < 6; i++)
    {
        moinuddin[i].setid();
        moinuddin[i].getid();
    }


    return 0;
}*/

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1, b = v2;
    }

    friend complex sumcomplex(complex o1, complex o2);    // Friend Function
    void print()
    {
        cout << "Complex number is " << a << " + " << b << "i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;

    c1.setdata(4, 2);
    c1.print();
    c2.setdata(6, 2);
    c2.print();
    sum = sumcomplex(c1, c2);
    sum.print();
    return 0;
}