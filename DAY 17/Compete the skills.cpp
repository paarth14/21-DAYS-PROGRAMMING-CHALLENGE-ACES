#include <bits/stdc++.h>
using namespace std;

void skills(int a[], int b[])
{
    int count_a=0, count_b=0;
    
    for(int i=0; i<3; i++)
    {
        if(a[i]>b[i])
        {
            count_a++;
        }
        
        if(a[i]<b[i])
        {
            count_b++;
        }
    }
    
    cout<<count_a<<" "<<count_b<<endl;
}

int main() {
	//code
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a[3], b[3];
	    
	    for(int i=0;i<3; i++)
	    {
	        cin>>a[i];
	    }
	    
	    for(int i=0; i<3; i++)
	    {
	        cin>>b[i];
	    }
	    
	    skills(a,b);
	    
	}
	
	return 0;
}
