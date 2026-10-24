#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {3,4,5,3,4,5,3,4,9,7};
    int x;
    cin>>x;
    for(int i = v.size()-1 ; i>=0 ; i--){
        if(v[i]==x){
            cout<<"index "<<i;
            return 0;
        }
    }
    cout<<"target Not Found"<<endl;
    return 0;
}


// using forword Loop----------->>

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int index = -1;

//     vector<int> v = {3, 4, 5, 3, 4, 5, 3, 4, 9, 7};
//     int x;
//     cin >> x;

//     for (int i = 0; i < v.size(); i++) {
//         if (v[i] == x) {
//             index = i;
//         }
//     }
//     cout << index << endl;

//     return 0;
// }
