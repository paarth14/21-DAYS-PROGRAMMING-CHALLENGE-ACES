//To check whether wowel is present in a string. using bool datatype.
#include <iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter string: "<<endl;
    cin>>str;
    
    bool isPresent = false;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u')
        {
            isPresent = true;
        }
        
    }
    
    if(isPresent==true)
    {
        cout<<"Yes"<<endl;
    }
    
    else
    {
        cout<<"No";
    }

    return 0;
}
