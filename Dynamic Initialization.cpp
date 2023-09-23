#include <iostream>
using namespace std;

class Bankdeposit
{
private:
    int principle;
    int year;
    float interestrate;
    float returnvalue;

public:
    Bankdeposit() {}
    Bankdeposit(int p, int y, float r);
    Bankdeposit(int p, int y, int r);
    void show();
};

Bankdeposit ::Bankdeposit(int p, int y, float r)
{
    principle = p;
    year = y;
    interestrate = r;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

Bankdeposit ::Bankdeposit(int p, int y, int r)
{
    principle = p;
    year = y;
    interestrate = float(r) / 100;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

void Bankdeposit ::show()
{
    cout << "Principle amount was " << principle << " . Return value after " << year << " year is " << returnvalue << endl;
}

int main()
{
    Bankdeposit bd1, bd2;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p,y and r" << endl;
    cin >> p >> y >> r;
    bd1 = Bankdeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p,y and R" << endl;
    cin >> p >> y >> R;
    bd2 = Bankdeposit(p, y, R);
    bd2.show();

    return 0;
}