#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    int countPositive = 0;
    int countNegative = 0;
    int countZero = 0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            countPositive++;
        }
        else if(arr[i]<0)
        {
            countNegative++;
        }
        else
        {
            countZero++;
        }
    }

    float positiveFractions = (float)countPositive / n;
    float negativeFractions = (float)countNegative / n;
    float zeroFractions = (float)countZero / n;

    cout<<positiveFractions<<endl;
    cout<<negativeFractions<<endl;
    cout<<zeroFractions;

    return 0;
    
}
