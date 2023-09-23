#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void student ::set_roll_no(int r)
{
    roll_number = r;
}

void student ::get_roll_no()
{
    cout << "The roll no is " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void exam ::get_marks()
{
    cout << "The marks obtained in the maths are: " << maths << endl;
    cout << "The marks obtained in the physics are: " << physics << endl;
}

class result : public exam
{
    float percentage;

public:
    void display()
    {
        get_roll_no();
        get_marks();
        cout << "The percentage is " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    result m;
    m.set_roll_no(61);
    m.set_marks(90.90,80.0);
    m.display();
    return 0;
}