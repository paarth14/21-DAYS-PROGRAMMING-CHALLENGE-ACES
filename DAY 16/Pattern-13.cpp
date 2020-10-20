//Number Pattern

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of levels: "<<endl;
    cin>>n;
    
    for(int i=1; i<=n; i++)//For rows
    {
        for(int j=1; j<=n-i; j++)//For columns printing spaces
        {
            cout<<" ";
        }
        
        for(int j=1; j<=i; j++)//For columns printing numbers
        {
            cout<<j<<" ";
        }
        
        cout<<endl;
    }
    
    return 0;
}

// Enter the number of levels: 
// 5
//     1 
//    1 2 
//   1 2 3 
//  1 2 3 4 
// 1 2 3 4 5 
