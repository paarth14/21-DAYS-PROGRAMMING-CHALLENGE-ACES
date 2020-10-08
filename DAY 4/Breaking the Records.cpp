#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int scores[n];
    for(int i=0; i<n; i++)
    {
        cin>>scores[i];
    }

    int highScore = scores[0];
    int lowScore = scores[0];

    int lowRecordBroken = 0;
    int highRecordBroken = 0;

    for(int i=1; i<n; i++)
    {
        if(scores[i]<lowScore)
        {
            lowScore = scores[i];
            lowRecordBroken++;
        }

        else if(scores[i]>highScore)
        {
            highScore = scores[i];
            highRecordBroken++;
        }
    }

    cout<<highRecordBroken<<" "<<lowRecordBroken;

    return 0;


}
