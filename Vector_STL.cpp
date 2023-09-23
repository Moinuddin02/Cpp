#include <iostream>
#include<vector>
using namespace std;


void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}


int main(){
    vector<int> vec1 ;  
    int element,size;
    cout<<"Enter the size of your vector "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add this vector: "<<endl;
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vector<int>::iterator i;
    i =vec1.begin();
    vec1.insert(i+2,10,100);
    display(vec1);
    return 0;
}