#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
     for(int i = 0; i < v.size(); i++){
            cout<<v[i]<<" ";
        }
}

void reversePart(int i,int j,vector<int> &v){
        while (i <= j) {
            
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
}
}
int main(){
    vector<int>v = {3,4,6,7,8,4,2,7};

    reversePart(1,4,v);
    display(v);
     return 0;

}
 