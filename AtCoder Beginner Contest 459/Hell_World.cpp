#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a = "HelloWorld";

    for (int i = 0; i < a.size(); i++)
    {
        if (n -1 != i)
        {
            cout << a[i];
        }
    }

    return 0;
}