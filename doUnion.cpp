#include<bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int arr[n+m];

     int i=0,j=0,k=0;
     while(i<n){
        arr[k] = a[i];
        i += 1;
        k += 1;
     }
     while(j<m){
        arr[k] = b[j];
        j += 1;
        k += 1;
     }

int count=0;
sort(arr,arr+n+m);
    for(i=0;i<n+m;i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }
    return count;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];

    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];

    int res = doUnion(a,n,b,m);
    cout<<res;

    return 0;
}
