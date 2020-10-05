#include<iostream>
using namespace std;

int main()
{
    int a[3];

    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    int b[3];

    for(int i=0; i<3; i++)
    {
        cin>>b[i];
    }

    int alice_score=0, bob_score=0;

    for(int i=0; i<3; i++)
    {
        if(a[i]>b[i])
        {
            alice_score++;
        }
        else if(a[i] == b[i])
        {
        
        }
        else
        {
            bob_score++;
        }
    }
    cout<<alice_score<<" "<<bob_score;

    return 0;
}
