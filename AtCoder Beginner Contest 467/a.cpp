#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();

    int h, w;
    cin >> h >> w;

    if (w * 10000 >= 25 * h * h)
        cout << "Yes\n";
    else
        cout << "No\n";
    

    return 0;
}