#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    public:
    Node(int dt, Node* nxt){
        data = dt;
        next = nxt;
    }
};

void printLL(Node* head){   // LL traverasal and printing 
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<< " ";
        temp = temp->next;
    } 
    cout<<endl;
}

int lengthOfLL(Node* head){
    int len =0;
    Node* temp = head;
    while(temp != nullptr){
        len++;
        temp = temp->next;
    } 
    return len;
}

int main(){
    vector<int> arr = {10,20,30,40,50};
    int n = arr.size();
    // we have to convert this array to linked list
    Node * head = new Node(arr[0],nullptr);
    Node * move = head;
    for(int i=1;i<n;i++){
        Node* temp = new Node(arr[i] , nullptr);
        move -> next = temp;
        move  = move ->next;
    }
    printLL(head);
    cout<<lengthOfLL(head);5
}
