//Star Pattern

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of levels: "<<endl;
    cin>>n;
    
    for(int i=1; i<=n; i++)//For rows
    {
        for(int j=1; j<=n-i; j++)//For columns -> spaces printing
        {
            cout<<" ";
        }
        
        for(int j=1; j<=2*i-1; j++)//For columns -> stars printing
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    for(int i=n; i>=1; i--)//For rows
    {
        for(int j=1; j<=n-i; j++)//For columns -> spaces printing
        {
            cout<<" ";
        }
        
        for(int j=1; j<=2*i-1; j++)//For columns -> stars printing
        {
            cout<<"*";
        }
        
        cout<<endl;
    } 
    
    return 0;
}

// Enter the number of levels:                                                                                                     
// 5                                                                                                                               
//     *                                                                                                                           
//    ***                                                                                                                          
//   *****                                                                                                                         
//  *******                                                                                                                        
// *********                                                                                                                       
// *********                                                                                                                       
//  *******                                                                                                                        
//   *****                                                                                                                         
//   ***                                                                                                                          
//    *  
