#include<bits/stdc++.h>
using namespace std;

int k_minimum_array(int arr[], int n,int k)
{
    sort(arr,arr+n);
    return arr[k-1];

}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<k_minimum_array(arr,n,k);
}
