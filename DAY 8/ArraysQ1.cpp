/* Problem Statement:- Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0.*/

#include<iostream>
using namespace std;

int main()
{
    int arr[20];
    int pos = 0;
    int neg = 0;
    int odd = 0;
    int even = 0;
    int zero = 0;
    
    for(int i=0; i<20; i++)
    {
        cout<<"Enter a number: "<<endl;
        cin>>arr[i];
        
        if(arr[i]>0)
        {
            pos++;
        }
        
        else if(arr[i]<0)
        {
            neg++;
        }
        
        else
        {
            zero++;
        }
        
        if(arr[i]%2==0)
        {
            even++;
        }
        
        else
        {
            odd++;
        }
        
        
    }
    
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
    cout<<"Zero: "<<zero<<endl;
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    
    return 0;
}
