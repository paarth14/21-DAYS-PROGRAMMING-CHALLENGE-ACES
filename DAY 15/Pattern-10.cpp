//Inverted number pattern

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of levels: "<<endl;
    cin>>n;
    
    for(int i=1; i<=n; i++)//For rows
    {
        for(int j=1; j<=n+1-i; j++)//For columns
        {
            cout<<j<<" ";
        }
        
        cout<<endl;
    }
    
    return 0;
}

// Enter the number of levels: 
// 5
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
