#include<iostream>
using namespace std;

void halfPyramidPattern1(int n)
{
    for(int i=1; i<=n; i++) //outer loop
    {
        for(int j=1; j<=i; j++) //inner loop
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
}

int main()
{
    int num;
    cout<<"Enter the number of levels of pattern: "<<endl;
    cin>>num;
    
    halfPyramidPattern1(num); //function calling
    
    return 0;
}

// Output :
// Enter the number of levels of pattern:                                                                                        
// 10                                                                                                                            
// *                                                                                                                             
// **                                                                                                                            
// ***                                                                                                                           
// ****                                                                                                                          
// *****                                                                                                                         
// ******                                                                                                                        
// *******                                                                                                                       
// ********                                                                                                                      
// *********                                                                                                                     
// **********  
