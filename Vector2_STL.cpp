#include <iostream>
#include<list>
using namespace std;

void display(list<int> &l)
{
    list<int> :: iterator it;
    for (it=l.begin(); it!=l.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}


int main(){
    list<int> list1;  // List of 0 length
    list1.push_back(900);
    list1.push_back(200);
    list1.push_back(8000);
    list1.push_back(100);

     // list<int> :: iterator iter;
    // iter=list1.begin();
    // cout<<*iter<<" "; 
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" "; 
    // iter++;
    // cout<<*iter<<" "; 
    // iter++;   

    // display(list1);
    // list1.pop_front();
    // display(list1);
     


    list<int> list2(3);   // Empty list of size 3

    list<int> :: iterator iter;
    iter=list2.begin();
    *iter=110;
    iter++;
     *iter=20;
    iter++;
     *iter=10;
    iter++;


    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"After merging"<<endl;
    display(list1);

    // display(list2);


    
    return 0;
}