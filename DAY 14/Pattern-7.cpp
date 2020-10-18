//Half Pyramid using numbers

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of levels: "<<endl;
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<i;
        }
        
        cout<<endl;
    }
    
    return 0;
}

// Enter the number of levels:                                                                                                     
// 5                                                                                                                               
// 1                                                                                                                               
// 22                                                                                                                              
// 333                                                                                                                             
// 4444                                                                                                                            
// 55555
