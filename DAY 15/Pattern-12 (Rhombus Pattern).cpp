//Rhombus pattern

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of levels: "<<endl;
    cin>>n;
    
    for(int i=1; i<=n; i++)//For rows
    {
        for(int j=1; j<=n-i; j++)//This loop is for printing spaces.
        {
            cout<<" ";
        }
        for(int j=1; j<=n; j++)//This loop is for printing stars.
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;
}

// Enter the number of levels:                                                                                                     
// 5                                                                                                                               
//     *****                                                                                                                       
//    *****                                                                                                                        
//   *****                                                                                                                         
//  *****                                                                                                                          
// *****  
