#include <iostream>
#include <string>
using namespace std;

class c
{
private:
    string s;

public:
    void read();
    void check_binary();
    void ones_com();
    void display();
};

void c ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void c ::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i)!='1')
        {
            cout << "Incorrect Binary Number :( " << endl;
            exit(0);
        }
    }
}

void c :: ones_com()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
              s.at(i)='0';
        }
        
    }
    
}

void c :: display()
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
      cout<<s.at(i);
    }

    cout<<endl;
    
} 



int main()
{
    c c1;
    c1.read();
    c1.check_binary();
    c1.ones_com();
    c1.display();
    return 0;
}