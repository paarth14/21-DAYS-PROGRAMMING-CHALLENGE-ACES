//Prime numbers between 2 numbers using functions

#include<iostream>
#include<math.h>

using namespace std;

bool isPrime(int num)
{
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    
    return true;
}

int main()
{
    int a,b;
    
    cout<<"Enter 1st number: "<<endl;
    cin>>a;
    
    cout<<"Enter 2nd number: "<<endl;
    cin>>b;
    
    for(int i=a; i<=b; i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }
}
