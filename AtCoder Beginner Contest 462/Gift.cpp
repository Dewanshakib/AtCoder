#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> rev(n);

    for (int i =0;i < n;i++) {
        int k;
        cin >> k;
        for (int j = 0;j <k;j++) {
            int x;
            cin >> x;

            rev[x - 1].push_back(i);
        }
    }
    
    for (int i = 0;i < n;i++) {
        cout << rev[i].size();
        for (int x:rev[i]){
            cout << " " << x + 1;
        }
        cout << endl;
    }
    
    
    return 0;
}