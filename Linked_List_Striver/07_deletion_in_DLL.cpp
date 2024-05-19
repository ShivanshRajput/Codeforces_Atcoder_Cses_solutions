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

Node * deleteHead(Node* head){
    if(head == nullptr or head->next==nullptr) return nullptr;
    Node*temp = head;
    head = head->next;
    head->prev=nullptr;
    temp->next=nullptr;
    delete temp;
    return head;
}   

Node * deleteTail(Node* head){
    Node * move = head;
    
}

int main(){
    vector<int>arr = {10,20,30,40,50,60,70,80};
    Node * head = arrToDLL(arr);
    head->printList();

    head = deleteHead(head);
    head->printList();

}