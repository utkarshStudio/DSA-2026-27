#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1 = {3,4,5,3,4,5,3,4,9,7};
    int n = v1.size();
    vector<int>v2(n);
   
        for(int i = 0 ; i < n ; i++){
            //i + j = size-1;
            int j = v1.size()-1-i;
            v2[i] = v1[j];
        }

            for(int i = 0; i < n; i++){
                cout<<v2[i]<<" ";
            }
     return 0;
}
 
// Not Preferred -> Extra Space O(n)

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v1 = {3,4,5,3,4,5,3,4,9,7};
//     vector<int>v2;

//     for(int i = v1.size()-1 ; i>=0 ;i--){
//         v2.push_back(v1[i]);
//     }
//     for(int i = 0; i < v2.size(); i++){
//         cout<<v2[i]<<" ";
//     }
//     return 0;
// }
 
