#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        Node * prev;
        int data;
        Node * next;
    public:
    // constructor functions
    Node(int data){
        this->prev = nullptr;
        this->data = data;
        this->next = nullptr;
    }
    Node(Node *prev , int data , Node * next){
        this->prev = prev;
        this->data = data;
        this->next = next;
    }
    // printing functions
    void printList(){
        Node *move = this;
        while(move != nullptr){
            cout<<move->data<<" ";
            move = move ->next;
        }
        cout<<endl;
    }
};

Node * arrToDLL(vector<int>arr){
    Node * head = new Node(arr[0]);
    Node * last = head;
    for(int i=1;i<arr.size();i++){
        Node * temp = new Node(last , arr[i] , nullptr);
        last->next=temp;
        last = temp;
    }
    return head;
}

// insertion before head
Node * insertAtHead(Node * head , int data){
    if(head == nullptr) return new Node(data);
    Node * newnode = new Node(data);
    newnode->next = head;
    head->prev = newnode;
    return newnode;
}

// insertion before tail
Node * insertAtTail(Node * head , int data){
    if(head->next==nullptr) return insertAtHead(head,data);
    Node * move = head;
    while(move->next != nullptr){
        move = move->next;
    }
    Node * newnode = new Node(data);
    newnode->prev = move->prev;
    move->prev = newnode;
    newnode->next = move;
    newnode->prev->next = newnode;
    return head;
}

// insert before kth node
Node * insertAtKthNode(Node * head , int data , int k){
    if(k==1){
        return insertAtHead(head , data);
    }
    if(head == nullptr) return nullptr;
    Node * move = head;
    int cnt =0;
    while(move!=nullptr){
        cnt++;
        if(cnt==k){
            Node * newnode = new Node(data);
            newnode->prev = move->prev;
            move->prev = newnode;
            newnode->next = move;
            newnode->prev->next = newnode;
            break;
        }
        move = move->next;
    }
    return head;
}



int main(){
    vector<int> arr = {1,2,3,4,5,6};
    Node * head = arrToDLL(arr);
    head->printList();

    // // insertion before head;
    // head = insertAtHead(head , 99);
    // head->printList();

    // // insertion before tail;
    // head = insertAtTail(head , 99);
    // head->printList();
    
    // insert before kth element;
    head = insertAtKthNode(head , 55 , 3 );
    head->printList();

}