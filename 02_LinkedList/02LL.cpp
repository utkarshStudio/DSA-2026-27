#include<iostream>
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

    Node* convertToLL(vector <int> &arr){
        Node* head = new Node(arr[0]);
        Node* mover = head;
            for(int i = 1 ; i<arr.size() ; i++){
                Node* temp = new Node(arr[i]);
                mover->next = temp;
                mover = temp;
            }
            return head;
        }
    void diaplay(Node* head){
        Node* temp = head;
        while(temp!= nullptr){
              cout<<temp->data<<" ";
              temp = temp->next;
        }
        cout<<endl;
    }   
    int lenghtOfLL(Node* head){
        int count = 0;
        Node* temp = head;
        while(temp!= nullptr){
              count++;
              temp = temp->next;
        }
        return count;
    } 

    int isPresent(Node* head,int val){
        Node* temp = head;
        while(temp!= nullptr){
              if(temp->data == val) return 1;
              temp = temp->next;
        }
        return 0;
    }

int main(){
    vector<int> arr = {1,2,3,4,5};
    
    Node* head = convertToLL(arr);

    cout<<head->data<<endl;

    diaplay(head);

    cout<<lenghtOfLL(head)<<endl;

    cout<<isPresent(head,5)<<endl;
    
    cout<<isPresent(head,7)<<endl;
    
    return 0;
    
}