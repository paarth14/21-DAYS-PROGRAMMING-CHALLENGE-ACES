#include <bits/stdc++.h>
using namespace std;

//Partition function

int Partition(int arr[], int s, int e)
{
    int pivot = arr[e];
    int pIndex = s;
    
    for(int i=s; i<e; i++)
    {
        if(arr[i]<=pivot)
        {
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            
            pIndex++;
            
        }
    }
    
    int temp = arr[e];
    arr[e] = arr[pIndex];
    arr[pIndex] = temp;
    
    return pIndex;
    
}
//quick sort function

void quickSort(int arr[], int s, int e)
{
    if(s<e)
    {
        int p = Partition(arr, s, e);
        quickSort(arr, s, (p-1)); // recursive QS call for left partition
        quickSort(arr, (p+1), e); // recursive QS call for right partition
    }
}

int main()
{
    int n; //n is size of an array
    cin>>n;

    int myarr[n];

    for(int i=0; i<n; i++)
    {
        cin>>myarr[i];
    }

    quickSort(myarr, 0, (n-1)); //Function calling

    for(int i=0; i<n; i++)
    {
        cout<<myarr[i]<<" ";
    }

    return 0;
}
