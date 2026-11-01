#include<bits/stdc++.h>
#include<vector>
using namespace std;
struct Node{
    public:
        int data;
        Node* next;

        Node(int data1,Node* next1){
            data = data1;
            next = next1;
        }
       
        Node(int data1){
            data = data1;
            next = nullptr;
        }    

};

void diaplay(Node* head){
    Node* temp = head;
    while(temp!= nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
        cout<<endl;
    } 

Node* delAtBeg(Node* head){
    if(head == nullptr){
        return head;
    }
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
} 
Node* delAtEnd(Node* head){
    if(head == nullptr){
        return head;
    }
    Node* temp = head;
    while(head->next->next != nullptr){
        head = head->next;
    }
    free(head);
    return head;
} 

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    head = delAtBeg(head);
    head = delAtEnd(head);
    diaplay(head);

    return 0;
}