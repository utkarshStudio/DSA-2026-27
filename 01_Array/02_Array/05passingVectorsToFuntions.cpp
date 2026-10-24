#include<iostream>
#include<vector>
using namespace std;

//So vectors are passed by value---each time new vector is created of different address;

// void change(vector<int> vec){
void change(vector<int>&vec){
    vec[0] = 100;
    for(int i = 0; i < vec.size(); i++){
        cout<<vec[i]<<" ";
    }
}
int main(){
    vector<int>v = {9,7,55,44,32,22};
    for(int i = 0 ; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    cout<<endl;

    for(int i = 0 ; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}