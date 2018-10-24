#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    string a;
    cin>>a;

    int count = 0;
    int x = 0;

    for(int i=0; i<n; ++i){
        if(a[i] == 'x'){
            if(x<3){
                ++x;
            }
            if(x==3){
                ++count;
            }
        }else{
            x=0;
        }
    }

    cout<<count;

    return 0;
}
