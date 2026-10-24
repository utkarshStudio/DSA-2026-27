#include<iostream>
using namespace std;
int main(){
    
    int marks[5] = {34,55,67,89,33};

    for(int i = 0; i < 5 ; i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }

    return 0;
}