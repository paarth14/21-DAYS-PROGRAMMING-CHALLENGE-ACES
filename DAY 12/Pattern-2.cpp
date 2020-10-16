#include<iostream>
using namespace std;


void halfPyramidPattern2(int n)
{
    for(int i=n; i>=1; i--)//outer loop
    {
        for(int j=i; j>0; j--)//inner loop
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
    
    halfPyramidPattern2(num);
    
    return 0;
}

// Enter the number of levels:                                                                                                     
// 6                                                                                                                               
// ******                                                                                                                          
// *****                                                                                                                           
// ****                                                                                                                            
// ***                                                                                                                             
// **                                                                                                                              
// *  
