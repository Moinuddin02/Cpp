#include <iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
    int arr[]={1,4,7,2,1,99,1,5,8,6,3,2};
    sort(arr,arr+5);

    for (int i = 0; i < 12; i++)
    {
        cout<<arr[i]<<endl;
    }
    

    return 0;
}