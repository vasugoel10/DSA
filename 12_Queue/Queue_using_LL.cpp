#include <iostream>
using namespace std;
class node{ // linked link implementation
public:
    int data;
    node*next;
    node(int value){
        data=value;
        next=nullptr;
    }
};
class Queue{
    node *head,*tail;
    int cs;
    public:
    Queue(){
        head=tail=nullptr;
        cs=0;
    }
    void push(int data){
        node* n=new node(data);
        if(head==NULL){
            head=tail=n;
            cs++;
        }
        else{
            tail->next=n;
            tail=n;
            cs++;
        }
    }
    void pop(){
        if(head==NULL){
            return;
        }
        else if(head->next==NULL){
            delete(head);
            head=NULL;
            tail=NULL;
            return;
        }
        node* temp=head;
        head=temp->next;
        delete(temp);
    }
    int front(){
        return head->data;
    }
    bool empty(){
        return cs==0;
    }
    int size(){
        return cs;
    }
};
