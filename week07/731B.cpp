#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    bool ans = true;
    int prevCoup = 0;
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }

    for(int i=0; i<n; ++i){
        if((a[i] == 0 && prevCoup!=0) || (i==n-1 && (a[i]-prevCoup)%2 != 0)){
            ans = false;
        }else if((a[i]-prevCoup)%2 == 0){
            prevCoup=0;
        }else if((a[i]-prevCoup)%2 != 0 && i!=n-1){
            prevCoup = (a[i]-prevCoup)%2;
        }
    }

    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
