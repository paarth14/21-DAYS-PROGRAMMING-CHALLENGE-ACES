//Reverse of string

#include<iostream>
using namespace std;

int main()
{
    string s1;
    cout<<"Enter name: "<<endl;
    cin>>s1;
    
    for(int i=s1.length()-1; i>=0; i--)
    {
        cout<<s1[i]<<" ";
    }
    
    return 0;
}
