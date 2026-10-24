#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {3,4,5,4,5,4,9,7};
    int i = 0;
    int j = v.size() - 1;

        while (i <= j) {
            
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
}

// for (int i = 0, j = v.size() - 1; i <= j; i++, j--) {
//     int temp = v[i];
//     v[i] = v[j];
//     v[j] = temp;
// }
        
            for(int i = 0; i < v.size(); i++){
                cout<<v[i]<<" ";
            }
     return 0;
}
 