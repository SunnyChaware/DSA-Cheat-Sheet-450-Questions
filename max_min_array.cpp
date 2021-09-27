#include<bits/stdc++.h>
using namespace std;

void maximum_minimum_array(int arr[], int n)
{
    sort(arr,arr+n);
    cout<<arr[0];
    cout<<endl;
    cout<<arr[n-1];
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    maximum_minimum_array(arr,n);
}
