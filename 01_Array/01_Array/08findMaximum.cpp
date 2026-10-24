#include<iostream>
using namespace std;
int main(){
    int arr[]={56,44,55,77,98,78};
    int mx = arr[0];
    int mn = arr[0];

    for(int i = 1 ; i < 6 ; i++){ //not travel in arr[0] coz it is also assign to mx-mn so i = 1;

        if(arr[i]>mx)
            mx = arr[i];
        if(arr[i]<mn)
            mn = arr[i];
    }

    cout<<mx<<endl;
    cout<<mn<<endl;
   
    // We can also initialize mx = INT_MIN and mn = INT_MAX by including <climits>.
    // In that case, the loop starts from index 0 because no array element is used for initialization.
    return 0;
}

