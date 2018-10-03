#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node{
    int parent;
    int index;
    int leaf;
    bool isRoot;
    struct node *root;
};

void addLeaves(struct node *root){
    if(root->root != NULL){
        root->root->leaf += 1;
    }
}

void redLeaves(struct node *root){
    if(root->root != NULL && root->leaf != 0){
        root->root->leaf -= 1;
    }
}

bool checkLeaves(struct node *root){

}

int main(){

    int n;
    bool spruce = false;
    cin>>n;
    struct node *nodes[n];
    nodes[0] = (struct node*)malloc(sizeof(struct node));
    nodes[0]->parent = -1;
    nodes[0]->index = 0;
    nodes[0]->leaf = 0;
    nodes[0]->root = NULL;
    nodes[0]->isRoot = true;
    for(int i=1;i<n;++i){
        nodes[i] = (struct node*)malloc(sizeof(struct node));
        cin>>nodes[i]->parent;
        nodes[i]->parent -= 1;
        nodes[i]->index = i;
        nodes[i]->leaf = 0;
        nodes[i]->isRoot = false;
    }
    for(int i=1;i<n;++i){
        nodes[i]->root = nodes[nodes[i]->parent];
    }

    for(int i=0;i<n;++i){
       addLeaves(nodes[i]);
    }

    for(int i=0;i<n;++i){
        if(nodes[i]->leaf != 0){
            nodes[i]->isRoot = true;
        }
        redLeaves(nodes[i]);
    }

    //for(int i=0;i<n;++i){
       //cout<<i<<" : "<<nodes[i]->leaf<<endl;
    //}

    for(int i=0;i<n;++i){
        if(nodes[i]->isRoot){
            //cout<<i<<" : "<<nodes[i]->leaf<<endl;
            if(nodes[i]->leaf < 3){
                spruce = false;
                break;
            }else{
                spruce = true;
            }
        }
    }
    if(!spruce){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }

}
