//Take 10 integer inputs from user and store them in an array. Now, copy all the elements in another array but in reverse order.


#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    
    for(int i=0; i<10; i++)
    {
        cout<<"Enter a number: ";
        cin>>arr[i];
    }
    
    cout<<"Your array in reverse order is: "<<endl;
    
    for(int i=9; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
