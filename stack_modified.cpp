#include<iostream>
#include<stack>
using namespace std;
stack<int> ms;
stack<int> as;

void push(int x){
    ms.push(x);
    if(x<=as.top() or as.empty()){
        as.push(x);
    }
}

void pop(){
    if(as.top() == ms.top()){
        as.pop();
    }
    ms.pop();
}

void getMin(){
    cout<<as.top()<<" ";
}
int main() {
    // driver code
    cout<<"hello";
    push(20);
    push(10);
    getMin();
    push(5);
    getMin();
    pop();
    getMin();
    pop();
    getMin();
}