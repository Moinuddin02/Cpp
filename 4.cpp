#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    int salary;

public:
    void setdata(void)
    {
        cout << "Enter id of employee" << endl;
        cin >> id;
    }

    void getdata(void)
    {
        cout << "The value of id is " << id << endl;
    }
};

int main()
{
    employee e1[10];
    for (int i = 0; i < 10; i++)
    {
        e1[i].setdata();
        e1[i].getdata();
    }

    return 0;
}