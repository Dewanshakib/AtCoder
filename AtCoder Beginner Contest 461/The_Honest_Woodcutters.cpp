#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> a(n);

    for (int i = 0; i < n; i++)
    {
        // axe to pond
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

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "V" << " : " << i << "->";
    //     for (int j = 0; j < a[i].size(); j++)
    //     {
    //         cout << " " << a[i][j];
    //     }
    //     cout << endl;
    // }

    return 0;
}