//Floyd's Triangle

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of levels: "<<endl;
    cin>>n;
    
    int count = 1;
    
    for(int i=1; i<=n; i++)//For rows
    {
        for(int j=1; j<=i; j++)//For Columns
        {
            cout<<count<<" ";
            count++;
        }
        
        cout<<endl;
    }
    
    return 0;
    
    
}

// Enter the number of levels:                                                                                                     
// 5                                                                                                                               
// 1                                                                                                                               
// 2 3                                                                                                                             
// 4 5 6                                                                                                                           
// 7 8 9 10                                                                                                                        
// 11 12 13 14 15 
