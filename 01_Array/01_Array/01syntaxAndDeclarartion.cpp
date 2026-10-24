#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,8,9,6,5};
    // int arr[5]
    // arr[0] = 7;
    // arr[1] = 8;
    // arr[2] = 9;
    // arr[3] = 6;
    // arr[4] = 5;
    
    for(int i = 0; i < 5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int arr1[5];
        for(int i = 0; i < 5;i++){
        cin>>arr1[i];
        cout<<arr1[i]<<" ";
    }

    return 0;
}