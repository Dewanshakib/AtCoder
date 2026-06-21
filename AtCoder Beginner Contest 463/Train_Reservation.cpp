#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c = 5, ck;
    char x;
    cin >> r >> x;

    vector<vector<char>> s(r, vector<char>(c));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> s[i][j];
        }
    }

    if (x == 'A')
    {
        ck = 0;
    }
    else if (x == 'B')
    {
        ck = 1;
    }
    else if (x == 'C')
    {
        ck = 2;
    }
    else if (x == 'D')
    {
        ck = 3;
    }
    else if (x == 'E')
    {
        ck = 4;
    }

    bool flag = false;
    for (int i = 0; i < r; i++)
    {
        if (s[i][ck] == 'o')
        {
            flag = true;
            break;
        }
    }
    cout << (flag ? "Yes" : "No") << endl;

    return 0;
}