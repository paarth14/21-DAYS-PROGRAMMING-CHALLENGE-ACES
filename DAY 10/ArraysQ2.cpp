//Second largest element of an array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    int secondLargest = arr[n-1];
    
    for(int i=n-1; i>=0; i--)
    {
        if(secondLargest != arr[i])
        {
            secondLargest = arr[i];
            break;
        }
        
    }
    
    cout<<"Second largest element of array is: "<<secondLargest;
    
    return 0;
}
