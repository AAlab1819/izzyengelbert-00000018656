#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }

    int B = 0, C = 0;

    for(int i=0; i<n; ++i){
        if(a[i]>0){
            B += a[i];
        }else if(a[i]<0){
            C += a[i];
        }
    }

    int sum = B - C;
    cout<<sum;

    return 0;
}

