#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,s=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        s+=a[i];
	        cout<<s/(i+1)<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
