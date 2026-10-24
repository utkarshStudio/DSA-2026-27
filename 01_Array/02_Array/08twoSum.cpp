#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {3,4,5,3,4,5,3,4,9,7};
    int x;
    cin>>x;
    // Use i+1 in inner loop because we don't add the same index element.
    for(int i = 0 ; i < v.size() ; i++){
        for(int j = i+1 ; j < v.size() ; j++){
            if(v[i]+v[j]==x){ 
            cout<<"{"<<i<<","<<j<<"}"<<endl;
        }
        }
    }
    return 0;
}
 
