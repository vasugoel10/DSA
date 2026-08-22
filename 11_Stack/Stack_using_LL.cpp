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
class Stack{
    private:
    node* head;
    public:
    Stack(){
    head = nullptr;
}
    void push(int data){
        node* n=new node(data);
            n->next=head;
            head=n;
    }
    void pop(){
        if(head!=nullptr){
            node *temp=head;
            head=head->next;
            delete temp;
            return;
    }
        else{
            return;
        }
    }
    int top(){
        if(head != nullptr){
            return head->data;
        }
        return -1;
    }

    bool empty(){
        if(head==nullptr){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(40);
    s.push(123);
    s.pop();
    s.pop();
    cout<<s.empty()<<endl;
    cout<<s.top()<<endl;
}
