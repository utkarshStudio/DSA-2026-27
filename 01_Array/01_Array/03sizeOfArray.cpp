#include<iostream>
using namespace std;
int main(){
     
    int arr[]={4,6,3,5,6,4,3,6,3,4};
    int size;
    
    // size = sizeof(arr)/sizeof(int);
    size = sizeof(arr)/sizeof(arr[0]);

    cout<<size<<endl;

    return 0;
}