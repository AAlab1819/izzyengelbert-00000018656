#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
    int index;
    int val;
    struct node *parent;
};

int countLevel(struct node *emp, int level){
    if(emp->parent == NULL){
        return level;
    }else{
        countLevel(emp->parent, ++level);
    }
}

int main(){

    int n;
    cin>>n;
    struct node *emp[n];

    for(int i=0; i<n; ++i){
        emp[i] = (struct node*)malloc(sizeof(struct node));
        int temp;
        cin>>temp;
        emp[i]->index = i;
        if(temp == -1){
            emp[i]->val = temp;
        }else{
            emp[i]->val = temp-1;
        }
    }
    int groupTotal = 1;
    for(int i=0; i<n; ++i){
        if(emp[i]->val != -1){
            emp[i]->parent = emp[emp[i]->val];
        }else{
            emp[i]->parent = NULL;
        }
    }

    for(int i=0; i<n; ++i){
        int temp = countLevel(emp[i], 1);
        if(temp > groupTotal){
            groupTotal = temp;
        }
    }

    cout<<groupTotal;
    return 0;
}
