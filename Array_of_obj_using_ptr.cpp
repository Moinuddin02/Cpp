#include <iostream>
using namespace std;

class shop
{
   private:
   int id;
   float price;
   public:
   void setdata(int a,int b)
   {
    id=a;
    price=b;
   }

   void getdata(void)
   {
    cout<<"ID of this item is "<<id<<endl;
    cout<<"Price of this item is "<<price<<endl;
   }

};

int main(){
    int size=4;
    shop*ptr=new shop[size];
    shop*ptrtemp=ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    
    
    return 0;
}