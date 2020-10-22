// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends


/*Complete the function below*/
int PalinArray(int a[], int n)
{  //add code here.
    
    for(int j=0; j<n; j++)
    {
        int k = a[j];
        int digit = 0;
        int rev = 0;
        
        while(k>0)
        {
            digit = k%10;
            rev = (rev*10) + digit;
            k = k/10;
        }
        if(rev!=a[j])
        {
            return 0;
        }
        
    }
    
    return 1;    
}
