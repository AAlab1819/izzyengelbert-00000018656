#include <iostream>
using namespace std;
int main(){

    long long int A,B;
    long long int x,y,z,reqYellow,reqBlue;
    long long int output = 0;
    cin>>A>>B;
    cin>>x>>y>>z;
    reqYellow = 2*x + y;
    reqBlue = y + 3*z;
    if(reqYellow > A){
        output += reqYellow - A;
    }
    if(reqBlue > B){
        output += reqBlue - B;
    }

    cout<<output;
    return 0;
}
