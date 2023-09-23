#include <iostream>
#include <cmath>
using namespace std;

class simple
{
protected:
    int num1, num2;
    int sum, product, diff;
    float div;

public:
    void set_base1(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    void process_sim()
    {
        sum = num1 + num2;
        product = num1 * num2;
        div = float(num1 / num2);
        diff = num1 - num2;
    }

    void display_sim(void)
    {
        cout << num1 << " + " << num2 << " = " << sum << endl;
        cout << num1 << " * " << num2 << " = " << product << endl;
        cout << num1 << " / " << num2 << " = " << div << endl;
        cout << num1 << " - " << num2 << " = " << diff << endl;
    }
};

class scientific
{
protected:
    int num3, num4;
    float sqr3, sqr4;
    float cub3, cub4;
    float sqrt3, sqrt4;

public:
    void set_data(int a, int b)
    {
        num3 = a;
        num4 = b;
    }

    void process_sci()
    {
        sqr3 = num3 * num3;
        sqr4 = num4 * num4;
        cub3 = num3 * num3 * num3;
        cub4 = num4 * num4 * num4;
        sqrt3 = sqrt(num3);
        sqrt4 = sqrt(num4);
    }

    void display_sci()
    {
        cout << "Square of " << num3 << " : " << sqr3 << endl;
        cout << "square of " << num4 << " : " << sqr4 << endl;
        cout << "Cube of " << num3 << " : " << cub3 << endl;
        cout << "Cube of " << num4 << " : " << cub4 << endl;
        cout << "square root of " << num3 << " : " << sqr3 << endl;
        cout << "square root of " << num4 << " : " << sqr4 << endl;
    }
};

class hybridcalculator : public simple, public scientific
{
    void set(int a, int b)
    {
        set_base1(a, b);
        set_data(a, b);
    }

    void process(void)
    {
        process_sim();
        process_sci();
    }

    void display()
    {
        display_sim();
        display_sci();
    };
};

int main()
{
    int a, b;
    cout << "Enter the first number: " << endl;
    cin >> a;
    cout << "Enter the second the number: " << endl;
    cin >> b;

    hybridcalculator h;
    h.set_base1(a, b);
    h.set_data(a, b);
    h.process_sim();
    h.process_sci();
    h.display_sim();
    h.display_sci();

    return 0;
}