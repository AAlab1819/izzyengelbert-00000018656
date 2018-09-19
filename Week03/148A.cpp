#include <iostream>
using namespace std;

int main(){

    int k,l,m,n,d;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;

    int count = 0;
    if((k != 1) && (l != 1) && (m != 1) && (n != 1)){
        for(int i=1; i<=d; ++i){
            if((i%k == 0) || (i%l == 0) || (i%m == 0) || (i%n == 0)){
                ++count;
            }
        }
    }else{
        count = d;
    }


    cout<<count;
    return 0;
}
