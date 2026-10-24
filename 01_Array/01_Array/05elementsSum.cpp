#include<iostream>
using namespace std;
int main(){
     
    int arr[5]={5,6,7,8,9};
    int sum = 0; 
    int product = 1;

    for(int i=0; i < 5; i++){
        sum += arr[i];
        product *= arr[i];
    }

    cout<<sum<<endl;
    cout<<product<<endl;
    
    return 0;
}