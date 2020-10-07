#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++) //For Height
    {
        int k =  n;
        while(k--) //For Rows
        {
            if(i<k)
            {
                cout<<" ";
            }
            else
            {
                cout<<"#";
            }
        }
        cout<<endl;
    }

    return 0;
}
