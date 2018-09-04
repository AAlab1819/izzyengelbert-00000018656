#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }
    int team[k];
    int index[k];
    for(int i=0; i<k; ++i){
        team[i] = 0;
    }
    int counter = 0;
    for(int i=0; i<n; ++i){
        //cout<<i;
        int alike = 0;
        for(int j=0; j<k; ++j){
            if(team[j] == a[i]){
                ++alike;
            }
        }
        if(alike == 0){
            team[counter] = a[i];
            index[counter] = i;
            ++counter;
        }
    }

    if(counter>=k){
        cout<<"YES"<<endl;
        for(int i=0;i<k; ++i){
            cout<<index[i]+1<<" ";
        }

    }else{
        cout<<"NO";
    }

    return 0;
}
