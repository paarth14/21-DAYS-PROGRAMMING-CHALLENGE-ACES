//Largest and smallest element in an array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; //size of array
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    
    int arr[n];
    
    for(int i=0; i<n; i++)
    {   
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    int max = arr[n-1];
    int min = arr[0];
    
    cout<<"Largest element is: "<<max<<endl;
    cout<<"Smallest element is: "<<min;
    
    return 0;
}
