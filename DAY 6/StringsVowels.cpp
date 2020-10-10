#include<iostream>
using namespace std;


int main()
{
    string str;
    cout<<"Enter name: "<<endl;
    cin>>str;
    
    int count = 0;
    for(int i=0; i<str.length(); i++)
    {
        if('a' == str[i])
        {
            count++;
        }
        else if('e' == str[i])
        {
            count++;
        }
        else if('i' == str[i])
        {
            count++;
        }
        else if('o' == str[i])
        {
            count++;
        }
        else if('u' == str[i])
        {
            count++;
        }
        
        
    }
    
    cout<<"There is a wowel in the string "<<endl;
    cout<<"There are "<<count<<" "<<"wowels in the string."<<endl;
    
    return 0;
}
