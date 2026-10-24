#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

// Two Pointer Method
void twoPointerSort(vector<int> &v){

    int n = v.size();
    int i = 0;
    int j = n - 1;

    while(i < j){
        if(v[i] == 0) i++;
        if(v[j] == 1) j--;
        // if(i > j) break;
        else if(v[i] == 1 && v[j] == 0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}

// Counting Method
void countingSort(vector<int> &v){

    int zero = 0;
    int one = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == 0) zero++;
        else one++;
    }

    for(int i = 0; i < v.size(); i++){
        if(i < zero) v[i] = 0;
        else v[i] = 1;
    }
}

int main(){

    vector<int> v1 = {0,1,1,0,0,1,0,1,0,1,0,0};
    vector<int> v2 = {0,1,1,0,0,1,0,1,0,1,0,0};

    twoPointerSort(v1);
    countingSort(v2);

    cout << "Two Pointer Method: ";
    display(v1);

    cout << "Counting Method: ";
    display(v2);

    return 0;
}