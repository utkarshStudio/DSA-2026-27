#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){

    vector<int> v = {1,-4,-4,6,9,7,-5,-3,0};
    
    int n = v.size();
    int i = 0;
    int j = n - 1;

    while(i < j){
        if(v[i]<0) i++;
        if(v[j]>=0) j--;
        if(v[i]>=0 && v[j]<0 && i<j){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }

    display(v);

    return 0;
}