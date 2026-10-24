#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> v(5);      // Size = 5, default value = 0
vector<int> v(5, 8);   // Size = 5, every element = 8
    vector<int>v;
    int n ;
    cin>>n;
    for(int i = 0; i<n; i++){
        int num;
        cin>>num;
        v.push_back(num);
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v[2] = 200;
    //for inserting use push_back and for updation use []

     for(int i = 0; i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    //vector doubles after filling like 2 4 8 

    return 0;
}