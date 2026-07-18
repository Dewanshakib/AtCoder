#include<bits/stdc++.h>
using namespace std;

int main () {

    int e,w;
    string s;
    cin >> s;

    e = 0, w= 0;
    for (int i=0;i < s.length();i++){

        if(s[i] == 'E') {
            e++;
        } else {
            w++;
        }
    }

    if(e > w){
        cout << "East" << endl;
    } else {
        
        cout << "West" << endl;
    }



    return 0;
}