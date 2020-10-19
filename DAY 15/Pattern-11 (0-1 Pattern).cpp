//0-1 Pattern

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of levels: "<<endl;
    cin>>n;
    
    //Logic -> if (Row no. + col no. = even) then print 1
    //else print 0
    
    for(int i=1; i<=n; i++)//For rows
    {
        for(int j=1; j<=i; j++)//For columns
        {
            if((i+j)%2==0)
            {
                cout<<"1"<<" ";
            }
            else
            {
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}

// Enter the number of levels: 
// 5
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
