#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
 map<string,int> marksmap;
 marksmap["Moinuddin"]=99;
 marksmap["Rohan"]=90;
 marksmap["Raj"]=77;
 map<string,int> :: iterator i;
 for (i=marksmap.begin(); i!=marksmap.end(); i++)
 {
    cout<<(*i).first<<" "<<(*i).second<<endl;
 }
 cout<<"The size is "<<marksmap.size()<<endl;
}