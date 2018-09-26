#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int count = 1;
    int sum = 0;
    bool even = n%2 == 0;
    int limit;
    if(even){
        limit = n/2;
    }else{
        limit = (n-1)/2;
    }
    for(int i=n-1 ; i>limit; --i){
        sum += count * i;
        ++count;
    }
    sum *= 2;
    if(even){
        sum += n/2 * n/2;
    }
    sum += n;
    cout<<sum;
    return 0;
}
