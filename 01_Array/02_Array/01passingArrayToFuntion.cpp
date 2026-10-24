#include<iostream>
using namespace std;
void display(int arr[],int size){
// int size = sizeof(arr)/sizeof(arr[0]);-->WRONG
    for(int i = 0; i < size ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void change(int a[]){
    a[0] = 100;
}
int main(){
    int arr[5] ={1,3,2,3,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    //Accessing the elements of array in another funtion
    //updation, pass by value & ref
    display(arr,size);
    change(arr); //here we pass address coz array is arr[]
    display(arr,size);
    return 0;
}