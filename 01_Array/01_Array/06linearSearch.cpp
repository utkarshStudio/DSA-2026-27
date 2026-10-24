#include<iostream>
using namespace std;
int main(){
     int n;
     cin>>n;

     int arr[n];
     for(int i = 0 ;i < n ;i++){
        cin>>arr[i];
     }

     int x;
     cin>>x;

       for(int i = 0 ;i < n;i++){
         if(arr[i]==x){
          cout<<"element found at index "<<i<<endl;
          return 0;
         }
     }

     cout<<"element not found !"<<endl;

    return 0;
}