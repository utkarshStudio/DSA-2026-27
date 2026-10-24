#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,3,2,44,22};
   
    int* ptr = arr; //giving Address
    cout<<ptr<<endl;  
    ptr[0] = 100;

    for(int  i = 0 ; i < 5 ; i++ ){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;

    *ptr = 200;
        for(int  i = 0 ; i < 5 ; i++ ){
        cout<<ptr[i]<<" ";
    }
    
    cout<<endl;

    ptr++;//ptr is point 2nd ele
    *ptr = 300;
    ptr--;//ptr is point 1st ele again
    
    for(int i = 0 ; i < 5 ; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;
    cout<<endl;

    1[arr] = 400;
        for(int  i = 0 ; i < 5 ; i++ ){
        cout<<i[ptr]<<" ";
    }
    cout<<endl;

    2[ptr] = 500;
          for(int  i = 0 ; i < 5 ; i++ ){
        cout<<i[arr]<<" ";
    }



    return 0;
}