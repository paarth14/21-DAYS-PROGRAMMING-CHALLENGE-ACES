#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int arr[5];

    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+5);

    long long int sum=0;
    for(int i=0; i<4; i++)
    {
        sum += arr[i];
        
    }
    cout<<sum<<" ";
    sum =0;
    
    for(int i=1; i<5; i++)
    {
        sum += arr[i];
    }
    cout<<sum;
    
    return 0;
}

