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
    int k = 0;
    vector<int>v = {3,4,6,7,8,4,2,7};
    int n = v.size();

    k = k%n;
    
    reversePart(0,n-1-k,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);

    display(v);
    return 0;

}
 