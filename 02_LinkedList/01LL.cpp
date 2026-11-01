#include<iostream>
#include<vector>
using namespace std;

// class Node{
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
int main(){
    vector<int> arr = {1,2,3};
    Node x = Node(arr[0],nullptr);
    cout<<x.data<<" "<<x.next<<endl;

    Node* y = new Node(arr[1],nullptr);
    cout<<y->data<<" "<<y->next<<endl;

    Node* z = new Node(arr[2]);
    cout<<z->data<<" "<<z->next<<endl;

    return 0;
    
}