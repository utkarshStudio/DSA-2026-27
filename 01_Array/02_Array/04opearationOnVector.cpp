#include<iostream>
#include<vector>
#include <algorithm> // Required for sort()/reverse()
using namespace std;
int main(){

    vector<int>v = {2,3,4,5,6,7};
   
       for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    v.pop_back();

     for(int i = 0; i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    //size changes but capacity wil never

    sort(v.begin(),v.end());
         for(int i = 0; i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end(),greater<int>());
         for(int i = 0; i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    reverse(v.begin(),v.end());
         for(int i = 0; i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    return 0;
}