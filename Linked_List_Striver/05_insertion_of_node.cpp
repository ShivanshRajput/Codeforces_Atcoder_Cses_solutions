#include<iostream>
#include<vector>
using namespace std;

class Node{
    public: 
        int data;
        Node * next;

    public:
        //constructors
        Node(){
            this->data = 0;
            this->next = nullptr;
        }
        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
        Node(int data , Node * next){
            this->data = data;
            this->next = next;
        }

        //print function for printing linked list
        void printList(){
            Node * move = this;
            while(move != nullptr){
                cout << move->data << " ";
                move = move -> next;
            }
            cout<<endl;
        }
}; 

Node * arrToLL(vector<int> arr){
    Node * head = new Node(arr[0]);
    Node * move = head;
    for(int i=1;i<arr.size();i++){
        Node * curr = new Node(arr[i]);
        move->next = curr;
        move = curr;
    }
    return head;
}

Node * insertAtHead(Node * head , int data){
    Node * temp = new Node(data,head);
    return temp;
}

Node * insertAtTail(Node * head , int data){
    if(head == nullptr) return new Node(data);
    Node * move = head;
    while(move->next!=nullptr){
        move=move->next;
    }
    move->next = new Node(data);
    return head;
}

Node * insertAtKthPlace(Node * head , int data , int k){
    if(k==1){
        return insertAtHead(head,data);
    }
    if(head==nullptr) return nullptr;
    Node * move = head;
    int cnt = 0;
    while(move != nullptr){
        cnt++;
        if(cnt==k-1){
            Node * temp = new Node(data,move->next);
            move->next = temp;
            break;
        }
        move = move ->next;
    }
    return head;
}

Node * insertAtValue(Node * head , int data , int value){
    if(head == nullptr) return nullptr;
    if(head->data==value){
        return new Node(data , head);
    }
    Node * move = head;
    while(move->next != nullptr){
        if(move->next->data == value){
            Node * temp = new Node(data,move->next);
            move->next = temp;
            break;
        }
        move = move->next;
    }
    return head;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    Node * head = arrToLL(arr);
    head->printList();

    // // insertion at head;
    // head = insertAtHead(head , 22);
    // head->printList();

    // //insertion at tail;
    // head = insertAtTail(head , 55);
    // head->printList();

    // insertion at kth position (i.e. befor kth element)
    // head = insertAtKthPlace(head , 99 , 5);
    // head->printList();

    // insert at value;
    head = insertAtValue(head , 99 , 4);
    head->printList();
}