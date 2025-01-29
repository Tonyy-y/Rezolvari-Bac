#include <bits/stdc++.h>
using namespace std;

int n, a[21][21];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[1][i];
        cout << a[1][i] << " ";
    }
    cout << "\n";

    for(int i = 2; i <= n; ++i, cout << "\n")
        for(int j = 1; j <= n; ++j)
        {
            if(i + j <= n + 1)
                a[i][j] = (a[i - 1][j] + a[i - 1][j + 1]) % 100;
            else
                a[i][j] = -1;
            cout << a[i][j] << " ";
        }

    return 0;
}