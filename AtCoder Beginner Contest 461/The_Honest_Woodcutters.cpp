#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> a(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i].push_back(x - 1);
    }

    bool flag = true;
    for (int i = 0;i < n;i++) {
        int x;
        cin >> x;

        if(a[x - 1][0] != i){
            flag = false;
            break;
        } else {
            flag = true;
        }
    }

    if(flag){
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}