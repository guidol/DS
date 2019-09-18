#include<iostream>
using namespace std;

class Node{
    public:
        Node *rightchild;
        int data;
        Node *leftchild;
};

class BinarySearchTree{
    public:
        Node *root;
        BinarySearchTree(){root = NULL;}
        void Insert(Node *p,int key);

        void InOrder(Node *p);
        Node * Search(Node *p,int key);
};

void BinarySearchTree::Insert(Node *t, int key){
    Node *r = NULL;
    if(!t){
        Node *p = new Node;
        p->data = key;
        p->rightchild = p->leftchild = NULL;
        root = p;
        return;
    }
    while(t){
        r = t;
        if(t->data < key)
            t = t->rightchild;
        else if(t->data > key)
            t = t->leftchild;
        else
            return;
    }
        Node *p = new Node;
        p->data = key;
        p->rightchild = p->leftchild = NULL;
        if(key < r->data)
            r->leftchild = p;
        else
            r->rightchild = p;
}

void BinarySearchTree::InOrder(Node *p){
    if(p){
        InOrder(p->leftchild);
        cout<<p->data<<" "<<endl;
        InOrder(p->rightchild);
    }
}

Node * BinarySearchTree::Search(Node *p,int key){
    while(p){
        if(p->data == key)
            return p;
        else if(p->data < key)
            p = p->leftchild;
        else
            p = p->rightchild;
    }
    return NULL;
}

int main(void){
    
    BinarySearchTree bst;
    bst.Insert(bst.root,10);
    bst.Insert(bst.root,5);
    bst.Insert(bst.root,20);
    bst.Insert(bst.root,8);
    bst.Insert(bst.root,30);
    bst.InOrder(bst.root);
    cout<<" "<<endl;
    return 0;
}