#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>& s, int x) {
    if (s.empty()) {
        s.push(x);
        return;
    }

    int top = s.top();
    s.pop();
    insertAtBottom(s, x);
    s.push(top);
}
void reverse_Stack(stack<int>&s){
    if(s.empty()){
        return;
    }
    int top=s.top();
    s.pop();
    reverse_Stack(s);
    insertAtBottom(s,top);
}
int main(){
    stack <int> s;
    s.push(10);
    s.push(20);
    reverse_Stack(s);
    cout<<s.top();
}
