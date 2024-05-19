#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        Node* prev;
        int data;
        Node* next;
    
    public:
        // constructors
        Node(){
            this->data = 0;
            this->next = nullptr;
            this->prev = nullptr;
        }
        Node(int data){
            this->data = data;
            this->next = nullptr;
            this->prev = nullptr;
        }
        Node(Node* prev , int data , Node* next){
            this->data = data;
            this->next = next;
            this->prev = prev;
        }

        // print list function
        void printList(){
            Node * move = this;
                while(move != nullptr){
                cout << move->data << " ";
                move = move -> next;
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

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};
    Node * head = arrToDLL(arr);
    head->printList();

}