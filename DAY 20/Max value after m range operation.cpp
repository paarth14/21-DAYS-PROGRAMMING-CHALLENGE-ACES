#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int arr[n]={0};
	    while(m--)
	    {
	        int a,b,k;
	        cin>>a>>b>>k;
	        for(int i=a;i<=b;i++)
	        {
	        arr[i]=arr[i]+k;
	        }
	    }
	    
	    sort(arr,arr+n);
	    cout<<arr[n-1]<<endl;
	}
	return 0;
}
