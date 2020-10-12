//Taking input of array and printing it

#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    
    for(int i=0; i<10; i++)
    {
        cout<<"Enter a number: "<<endl;
        cin>>arr[i];
    }
    
    cout<<"Numbers are: "<<endl;
    
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
