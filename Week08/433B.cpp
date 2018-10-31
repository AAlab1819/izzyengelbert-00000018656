#include <bits/stdc++.h>
using namespace std;
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(long long int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(long long int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

int main(){
    int n;
    cin>>n;
    long long int a[n+1] = {0};
    long long int b[n+1] = {0};

    for(int i=1; i<=n; ++i){
        cin>>a[i];
        b[i] = a[i];
        if(i>0){
            b[i] += b[i-1];
        }
    }


    mergeSort(a,0,n);
    for(int i=1;i<=n;++i){
        a[i] += a[i-1];
    }

    int m;
    cin>>m;

    for(int i=0;i<m;++i){
        int q,x,y;
        cin>>q>>x>>y;
        long long int sum;
        if(q==1){
            //cout<<b[y-1]<<" "<<b[x-1]<<endl;
            sum = b[y]-b[x-1];
            cout<<sum<<endl;
        }else if(q==2){
            //cout<<a[y-1]<<" "<<a[x-1]<<endl;
            sum = a[y]-a[x-1];
            cout<<sum<<endl;
        }
    }
    return 0;
}
