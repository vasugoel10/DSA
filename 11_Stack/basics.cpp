#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Stack{                       // using vector 
    private:
    vector<int>v;
    public:
    void push (int d){
        v.push_back(d);
        return;
    }
    void pop() {
        if (!v.empty()) {
            v.pop_back();
    }
    }
    int top(){
        return v[v.size()-1];
    }
    bool empty(){
        if(v.size()==0){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Stack s;
    s.push(5);
    // s.pop();
    cout<<s.top()<<endl;
    cout<<s.empty();
}