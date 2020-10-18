//Butterfly Pattern

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of levels: "<<endl;
    cin>>n;
    
    for(int i=1; i<=n; i++)//For rows
    {
        for(int j=1; j<=i; j++)//For columns
        {
            cout<<"*";
        }
        
        int space = 2*n - 2*i;
        for(int j=1; j<=space; j++)
        {
            cout<<" ";
        }
        
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    for(int i=n; i>=1; i--)//for mirror image (rows)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        
        int space = 2*n - 2*i;
        for(int j=1; j<=space; j++)
        {
            cout<<" ";
        }
        
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;

}


// Enter the number of levels:                                                                                                     
// 5                                                                                                                               
// *        *                                                                                                                      
// **      **                                                                                                                      
// ***    ***                                                                                                                      
// ****  ****                                                                                                                      
// **********                                                                                                                      
// **********                                                                                                                      
// ****  ****                                                                                                                      
// ***    ***                                                                                                                      
// **      **                                                                                                                      
// *        * 
