#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
    void InsertatFront(Node* &head,Node* &tail,int data){
        Node* n=new Node(data);
        if(head==NULL){
            head=tail=n;
        }
        else{
            n->next=head;
            head=n;
        }
    }
    void InsertAtEnd(Node* &head,Node* &tail,int data){
        Node* n=new Node(data);
        if(head==NULL){
            head=tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
    }
    void Printall(Node* head){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void InsertAtAnyIndex(Node* &head,Node* &tail,int index,int data){
        if(index == 0) {
        Node* n = new Node(data);
        n->next = head;
        head = n;

        if(tail == nullptr) {
            tail = n;
        }

        return;
    }
        Node*temp=head;
    for(int i=0;i<index-1;i++){
        temp=temp->next;
    }
    Node *curr=temp;
    temp=temp->next;
    Node*n=new Node(data);
    curr->next=n;
    n->next=temp;
    if(n->next == nullptr) {
        tail = n;
    }
    }
    void DeleteAtFront(Node* &head,Node* &tail){
        if(head==NULL){
            return;
        }
        if(head->next==NULL){
            delete(head);
            head=NULL;
            tail=NULL;
            return;
        }
        Node* temp=head;
        head=temp->next;
        delete(temp);
    }
    void DeleteAtEnd(Node* &head,Node* &tail){
    Node*temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    tail=temp;
    delete(temp->next);
    tail->next=NULL;
    }
    void DeleteAtAnyIndex(Node* &head,Node* &tail,int index){
        Node*temp=head;
        if(index==0){
            DeleteAtFront(head,tail);
            return;
        }
        for(int i=0;i<index-1;i++){
        temp=temp->next;
    }
    if(temp->next==tail){
        DeleteAtEnd(head,tail);
        return;
    }
    Node*curr=temp->next;
    temp->next=temp->next->next;
    delete(curr);
    }
    int Length(Node*head){
        int count=0;
        while(head!=NULL){
            count++;
            head=head->next;
        }
        return count;
    }
int main(){
    Node* head=NULL,*tail=NULL;
    InsertatFront(head,tail,18);
    InsertAtEnd(head,tail,15);
    Printall(head);
}