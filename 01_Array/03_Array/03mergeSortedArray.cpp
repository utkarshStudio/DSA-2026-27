#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {2, 5, 6, 8, 9};
    vector<int> v2 = {1, 3, 4, 5, 7, 10, 12};

    int n = v1.size();
    int m = v2.size();

    vector<int> v(n + m);

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m) {
        if (v1[i] < v2[j]) {
            v[k] = v1[i];
            i++;
        } 
        else {
            v[k] = v2[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        v[k] = v1[i];
        i++;
        k++;
    }

    while (j < m) {
        v[k] = v2[j];
        j++;
        k++;
    }

    for (int i = 0; i < n + m; i++) {
        cout << v[i] << " ";
    }

    return 0;
}

////in reverse order--->>>
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v1 = {2, 5, 6, 8, 9};
//     vector<int> v2 = {1, 3, 4, 5, 7, 10, 12};

//     int n = v1.size();
//     int m = v2.size();

//     vector<int> v(n + m);

//     int i = n-1;
//     int j = m-1;
//     int k = n+m-1;

//     while (i >=0 && j >= 0) {
//         if (v1[i] > v2[j]) {
//             v[k] = v1[i];
//             i--;
//         } else {
//             v[k] = v2[j];
//             j--;
//         }
//         k--;
//     }

//     while (i >=0) {
//         v[k] = v1[i];
//         i--;
//         k--;
//     }

//     while (j >=0) {
//         v[k] = v2[j];
//         j--;
//         k--;
//     }

//     for (int i = 0; i < n + m; i++) {
//         cout << v[i] << " ";
//     }

//     return 0;
// }

