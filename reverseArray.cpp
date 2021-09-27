#include<iostream>
using namespace std;

int reverseArray(int arr[], int n)
{
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(arr[s],arr[e]);
        s += 1;
        e -= 1;
    }
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverseArray(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}
