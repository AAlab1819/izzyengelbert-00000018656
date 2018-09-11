#include <iostream>
using namespace std;

int main(){


    int n;
    cin>>n;
    int array[n];
    int low;
    int high;
    for(int i=0; i<n; ++i){
        int number;
        cin>>number;
        array[i] = number;
        if(i==0){
            low = number;
            high = number;
        }else if(low>number){
            low = number;
        }else if(high<number){
            high = number;
        }
    }

    int counter = 0;

    for(int i=0;i<n;++i){
        if(array[i]>low && array[i] < high){
            ++counter;
        }
    }

    cout<<counter;
    return 0;
}
