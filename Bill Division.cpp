#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, act, cha = 0, b;
    cin>>n>>k;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        cha += arr[i];
    }

    cin>>b;

    act = cha - arr[k];
    act = act/2;

    if(b==act)
    {
        cout<<"Bon Appetit"<<endl;
    }
    else
    {
        cout<<b-act;
    }

    return 0;
}
