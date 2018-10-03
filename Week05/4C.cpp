#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    map<string,int>usernames;

    for(int i=0; i<n; ++i){
        string temp;
        cin>>temp;
        if(usernames[temp] == 0){
            usernames[temp] += 1;
            cout<<"OK"<<endl;
        }else{
            cout<<temp<<usernames[temp]++<<endl;
        }
    }

    return 0;
}
