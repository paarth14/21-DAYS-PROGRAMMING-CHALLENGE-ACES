#include <iostream>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int arr[n][n];
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<n; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<n; j++)
	        {
	            cout<<arr[j][i]<<" ";
	        }
	    }
	    
	    cout<<endl;
	}
	return 0;
}
