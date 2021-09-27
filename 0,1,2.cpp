public:
    void sort012(int a[], int n)
    {
   // largest number
    int largest = -1;
    for(int i=0;i<n;i++){
        largest = max(largest, a[i]);
    }

    //counting the numbers
    vector<int> freq(largest + 1, 0);

    for(int i=0; i<n; i++){
        freq[a[i]]++;
    }

    //put back th elements
    int j=0;
    for(int i=0;i<=largest; i++){
        while(freq[i]>0){
            a[j] = i;
            freq[i]--;
            j++;
        }
    }
    }
