#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();

   	int t;
   	cin >> t;
   	int k = 0;
   	while (t--) {
   		int a,b;
   		string s;
   		cin >> a >> b >> s;
   		
   		if (s == "keep"){
   			k += (b - a);
   		}
   	}
   	
   	cout << k;

    return 0;
}