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

int main(){
    vector<int> arr = {1, 2, 3, 5, 4};
    Node * head = arrToLL(arr);
    head->printList();
}
