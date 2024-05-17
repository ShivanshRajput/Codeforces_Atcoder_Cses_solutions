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

Node * deleteHeadNode(Node * head){
    if(head==nullptr) return head; // base case
    Node * temp = head;
    head = head -> next;
    delete temp;
    return head;
}

Node * deleteTailNode(Node * head){
    Node * move = head;
    if(move == nullptr || move->next == nullptr) return nullptr;
    while(move->next->next != nullptr){
        move = move->next;
    }
    delete move->next;
    move->next = nullptr;
    return head;
}

Node * deleteKthNode(Node * head , int k){
    if(k==1)
        return deleteHeadNode(head);
    int cnt=0;
    Node * move = head;
    Node * prev = nullptr;
    while(move != nullptr){
        cnt++;
        if(cnt==k){
            prev->next = prev->next->next;
            delete move;
            break;
        }
        prev = move;
        move = move->next;
    }
    return head;
}

Node * deleteValue(Node * head , int val){
    if(head == nullptr) return head;
    if(head->data == val){
        return deleteHeadNode(head);
    }
    Node * move = head;
    Node * prev = nullptr;
    while(move != nullptr ){
        if(move->data==val){
            prev->next = prev->next->next;
            delete move;
            break;
        }
        prev = move;
        move = move->next;
    }
  
    return head;
} 


int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    Node * head = arrToLL(arr);
    head->printList();

    // // deleting head node;
    // head = deleteHeadNode(head);
    // head->printList();

    // // deleting tail node;
    // head = deleteTailNode(head);
    // head->printList();

    // deleting kth element;
    head = deleteKthNode(head,9);
    head->printList();
    
    // // deleting element with value val
    // head = deleteValue(head,9);
    // head->printList();
}