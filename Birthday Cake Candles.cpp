#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int height[n];
    for(int i=0; i<n; i++)
    {
        cin>>height[i];
    }

    //to find maximum height

    sort(height, height+n);

    int max_height = height[n-1];
    
    int count = 0;

    for(int i=0; i<n; i++)
    {
        if(max_height == height[i])
        {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;

    
    
}
 
