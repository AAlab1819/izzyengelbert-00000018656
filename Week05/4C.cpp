#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;

struct node{
    int total;
    string name;
};

int main(){

    int n;
    cin>>n;
    struct node *usernames[n] = (struct node*)malloc(n * sizeof(struct node));
    for(int i=0; i<n; ++i){
        usernames[i]->total = 0;
        usernames[i]->name = "empty";
    }
    string responses[n];
    for(int i=0; i<n; ++i){
        string temp;
        cin>>temp;
        for(int j=0; j<n; ++j){
            if(usernames[j]->name == "empty"){
                usernames[j]->name = temp;
                responses[i] = "OK";
                break;
            }else if(usernames[j]->name == temp){
                usernames[j]->total += 1;
                char buffer[sizeof(int)*8+1];
                responses[i] = temp + itoa(usernames[j]->total, buffer, 10);
                break;
            }
        }
    }

    for(int i=0; i<n; ++i){
        cout<<responses[i]<<endl;
    }

    return 0;
}
