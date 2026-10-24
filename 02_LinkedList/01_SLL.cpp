#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        // Constructor
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

// Insert at head
void insertAtHead(Node* &head,int val){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
}

// Insert at tail
void insertAtTail(Node* &tail,int val){
    Node* temp = new Node(val);
    tail->next = temp;
    tail = temp;
}

// Insert at given index
void insertAtIndex(Node* &tail,Node* &head,int index,int val){

    if(index == 1){
        insertAtHead(head,val);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < index-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,val);
        return;
    }

    Node* toInsert = new Node(val);
    toInsert->next = temp->next;
    temp->next = toInsert;
}

// Display linked list
void display(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    Node* head = new Node(100);
    cout<<head->data<<endl;

    Node* tail = head;

    insertAtHead(head,10);
    cout<<head->data<<endl;
    display(head);

    insertAtTail(tail,1000);
    display(head);

    insertAtIndex(tail,head,3,200);
    display(head);

    insertAtIndex(tail,head,1,20);
    display(head);

    insertAtIndex(tail,head,6,2000);
    display(head);

    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    return 0;
}
//41:00 

