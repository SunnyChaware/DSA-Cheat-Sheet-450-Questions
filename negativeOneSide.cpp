#include<bits/stdc++.h>
using namespace std;

void negativeOneSide(int arr[], int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    negativeOneSide(arr,n);
}

