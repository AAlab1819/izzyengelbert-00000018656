#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int p;
    cin>>p;
    int pLev[p];
    for(int i=0; i<p; ++i){
        cin>>pLev[i];
    }
    int q;
    cin>>q;
    int qLev[q];
    for(int i=0; i<q; ++i){
        cin>>qLev[i];
    }
    int theGuy = 0;

    for(int i=1; i<=n; ++i){
        bool comp = false;
        for(int indexP=0; indexP<p ; ++indexP){
            if(pLev[indexP] == i){
                ++theGuy;
                comp = true;
                indexP = p;
            }
        }
        if(!comp){
            for(int indexQ=0; indexQ<q ; ++indexQ){
                if(qLev[indexQ] == i){
                    ++theGuy;
                    indexQ = q;
                }
            }
        }
    }

    if(theGuy == n){
        cout<<"I become the guy.";
    }else{
        cout<<"Oh, my keyboard!";
    }
    return 0;
}
