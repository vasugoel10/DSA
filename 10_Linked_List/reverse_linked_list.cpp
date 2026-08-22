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
Node* Reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}
int main(){
}