#include<iostream>
using namespace std;
int main(){
     int x = 50;
    int arr[5] = {84,44,67,89,99};
    int count = 0;
    for(int i = 0 ; i < 5 ; i++){
        if(arr[i]>x) 
            count++;
    }
    cout<<count<<endl;
    return 0;
}