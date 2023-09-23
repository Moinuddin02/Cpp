#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter Id no" << endl;
        cin >> id;
        count++;
    }

    void getdata(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getdata1(void)
    {
        cout << "The value of  count no is " << count << endl;
    }
};

int employee ::count;

int main()
{
    employee moin, sana, mom;
    moin.setdata();
    moin.getdata();
    employee::getdata1();

    sana.setdata();
    sana.getdata();
    employee::getdata1();

    mom.setdata();
    mom.getdata();
    employee::getdata1();
    return 0;
}