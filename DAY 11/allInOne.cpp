//Finding Max, min and second Largest element from an array.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; //size of array
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    
    int myarr[n];
    
    cout<<"Enter the integers: "<<endl;
    
    for(int i=0; i<n; i++)
    {
        cin>>myarr[i];
    }
    
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum  += myarr[i];
        
    }
    
    cout<<"The sum is: "<<sum<<endl;
    
    sort(myarr, myarr+n);
    
    int max = myarr[n-1]; //max element of array
    
    
    cout<<"The maximum element is: "<<max<<endl;
    
    int small = myarr[0]; //min element of array
    
    cout<<"The smallest element is: "<<small<<endl;
    
    //reverse the loop
    
    int secondLargest = myarr[n-1];
    
    for(int i=n-1; i>=0; i--)
    {
        if(secondLargest != myarr[i])
        {
            secondLargest = myarr[i];
            break;
        }
    }
    
    cout<<"The second largest is: "<<secondLargest<<endl;
    
    return 0;
    
    
    
}
