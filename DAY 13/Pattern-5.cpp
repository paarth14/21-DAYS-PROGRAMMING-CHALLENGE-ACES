#include<iostream>
using namespace std;

int main()
{
    int rows, cols;
    
    cout<<"Enter the number of rows: "<<endl;
    cin>>rows;
    
    cout<<"Enter the number of columns: "<<endl;
    cin>>cols;
    
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=cols; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;
}

// Enter the number of rows:                                                                                                       
// 5                                                                                                                               
// Enter the number of columns:                                                                                                    
// 6                                                                                                                               
// ******                                                                                                                          
// ******                                                                                                                          
// ******                                                                                                                          
// ******                                                                                                                          
// ****** 
