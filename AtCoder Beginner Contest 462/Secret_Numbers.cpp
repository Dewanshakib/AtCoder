#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    for (char ch:s){
        if(isdigit(ch)){
            cout << ch;
        }
    }

    return 0;
}