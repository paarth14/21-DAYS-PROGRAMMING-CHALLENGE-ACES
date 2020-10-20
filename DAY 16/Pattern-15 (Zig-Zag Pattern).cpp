//Zig-Zag pattern

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of levels: "<<endl;
    cin>>n;
    
    for(int i=1; i<=3; i++)//For rows
    {
        for(int j=1; j<=n; j++)//For columns
        {
            if(((i+j)%4==0) || (i==2 && (j%4==0)))
            {
                cout<<"* ";
                
            }
            
            else
            {
                cout<<"  ";
            }
        }
        
        cout<<endl;
    }
    
    return 0;
}

// Enter the number of levels:                                                                                                     
// 9                                                                                                                               
//     *       *                                                                                                                   
//   *   *   *   *                                                                                                                 
// *       *       *  
