#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};
class LinkedList{
    private:
        Node *first;
    public:
        LinkedList(){first=NULL;}
        LinkedList(int A[], int n);
        ~LinkedList();
        void Display();
        void Rdisplay(Node *p);
        void CallRecursive();
        //void Insert();
};
LinkedList::LinkedList(int A[], int n){
    Node *last,*temp;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
        for(int i=1;i < n; i++){
            temp = new Node;
            temp->data = A[i];
            temp->next = NULL;
            last->next = temp;
            last = temp;
        }
}
LinkedList::~LinkedList(){
    Node *p = first;
    while(first){
        first = first->next; 
        delete p;
        p = first;
    }
}
void LinkedList::Display(){
    Node *p = first;
    while(p != NULL){
        cout<< p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}
void LinkedList::Rdisplay(Node *p){
    if(p != NULL){
       // Rdisplay(p->next); //->>> Reverse Order; 
        cout<<p->data<<" ";
        Rdisplay(p->next); 
        //cout<<endl;
        
    }   
}
void LinkedList::CallRecursive(){
     LinkedList::Rdisplay(first);
}
int main(){
    
    int A[]={1,2,3,4,5};
    LinkedList linkl(A,5);
    linkl.CallRecursive();
    //linkl.Display();

    return 0;
}
