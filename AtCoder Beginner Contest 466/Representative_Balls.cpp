#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long

int main()
{

    optimize();

    int n, k;
    cin >> n >> k;
    vector<int> arr(k+1,-1);

    for (int i = 1;i <= n;i++) {
        int x,y;
        cin >> x >> y;

        arr[x] = max(arr[x],y);
    }

    for (int i = 1; i <= k;i++) {
        cout << arr[i] << " ";
    }

    return 0;
}