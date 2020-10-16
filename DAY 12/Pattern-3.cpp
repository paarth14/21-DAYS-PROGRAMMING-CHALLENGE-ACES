#include<iostream>
using namespace std;

void halfPyramidPattern3(int n)
{
    for(int i=1; i<=n; i++)//outer loop for printing levels
    {
        for(int k=n-i; k>0; k--)//inner loop for printing spaces
        {
            cout<<" ";
        }
        
        for(int j=1; j<=i; j++)//inner loop for printing symbols
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    
}

int main()
{
    int num;
    cout<<"Enter the number of levels: "<<endl;
    cin>>num;
    
    halfPyramidPattern3(num);
    
    return 0;
}

// Enter the number of levels:                                                                                                     
// 6                                                                                                                               
//      *                                                                                                                          
//     **                                                                                                                          
//    ***                                                                                                                          
//   ****                                                                                                                          
//  *****                                                                                                                          
// ******  

 
