#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> d(n);
    for (int i = 0;i < n;i++){
        d[i] = i + 1;
    }


    for (int i =0;i < n;i++){
        int lp = 0;
        int rp = i;

        if(s[i] != 'x'){
            while (lp < rp){
                swap(d[lp],d[rp]);
                lp++;
                rp--;
            }
        }
    }

    for (int i =0;i < n;i++){
        cout << d[i] << " ";
    }


    return 0;
}