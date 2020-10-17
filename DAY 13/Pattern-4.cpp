#include<iostream>
using namespace std;

void halfPyramidPattern4(int n)
{
    for(int i=n; i>=1; i--)//outer loop for printing levels
    {
        for(int k=n-i; k>0; k--)//inner for printing spaces
        {
            cout<<" ";
        }
        
        for(int j=i; j>0; j--)//inner loop for printing symbols
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
    
    halfPyramidPattern4(num);
    
    return 0;
}

// Enter the number of levels:                                                                                                   
// 5                                                                                                                             
// *****                                                                                                                         
//  ****                                                                                                                         
//   ***                                                                                                                         
//    **                                                                                                                         
//     *  
