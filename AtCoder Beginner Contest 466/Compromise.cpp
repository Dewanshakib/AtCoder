#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long

int main () {

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }

    int c = -1;
    for (int i = 0;i < n;i++) {
        if (arr[i] >= 0) {
            c++;
        }
    }

    if (c >= 0) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
 
    

    return 0;
}