//Problem statement: Take 10 integer inputs from user and store them in an array. Again ask user to give a number. Now, tell user whether that number is present in array or not.


#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    
    for(int i=0; i<10; i++)
    {
        cout<<"Enter a number: ";
        cin>>arr[i];
    }
    
    int n;
    cout<<"Enter the number to check whether number is present in array or not."<<endl;
    cin>>n;
    
    bool isPresent = false;
    for(int i=0; i<10; i++)
    {
        if(arr[i]==n)
        {
            isPresent = true;
        }
    }
    
    if(isPresent == true)
    {
        cout<<"Yes"<<endl;
    }
    
    else
    {
        cout<<"No";
    }
    return 0;
}
