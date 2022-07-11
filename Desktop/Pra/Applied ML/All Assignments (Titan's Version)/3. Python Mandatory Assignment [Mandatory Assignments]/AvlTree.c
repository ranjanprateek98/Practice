#include<stdio.h>
#include<stdlib.h>

struct node{
    int key;
    struct node* left;
    struct node* right;
    int height;
};

int getheight(struct node* n){
    if(n==NULL){
        return 0;
    }
    return n->height;
}

struct node* createNode(int key){
    struct node* node=(struct node*)malloc(size of(struct node));
    node->left=NULL;
    node->right=NULL;
    node->key=key;
    node->height=1;
    return node;
} 

int getbalancefactor(struct node* n){
    if(n==NULL){
        return 0;
    }
    return getheight(n->left)-getheight(n->right);
}

struct node* rightrotate(struct node* y){
    struct node* x= y->left;
    struct node* t2= x->right;
    x->right=y;
    y->left=t2;
    x->height=max(getheight(x->right),getheight(x->left))+1;
    y->height=max(getheight(y->right),getheight(y->left))+1;
    return x;
}

struct node* leftrotate(struct node* x){
    struct node* y= x->right;
    struct node* t2= y->left;
    y->left=x;
    x->right=t2;
    x->height=max(getheight(x->right),getheight(x->left))+1;
    y->height=max(getheight(y->right),getheight(y->left))+1;
    return y;
}

struct node* insert(struct node* node,int key){
    if(node==NULL){
        return(createNode(key))
    }
    if(key<node->key){
        node->left=insert(node->left,key);
    }
    else if(key>node->key){
        node->right=insert(node>right,key);
        return node;
    }
    int bf=getbalancefactor(node); 
}

int main(){


    return 0;
}