//*
#include<iostream>
#include<climits>
using namespace std;
int main(){

int arr[5]={67,45,33,44,77};
int mx = INT_MIN;

 for(int i = 0 ;i < 5 ; i++){
    if(mx<arr[i])
        mx = arr[i];
 }

 int smax = INT_MIN;
  for(int i = 0 ;i < 5 ; i++){
    if(smax<arr[i] && arr[i]!=mx)
        smax = arr[i];
 }

    cout<<smax;
    return 0;
}