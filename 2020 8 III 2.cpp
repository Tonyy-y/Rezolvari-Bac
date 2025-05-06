#include <iostream>
using namespace std;

int n, k, a[21][21];

int main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            cin >> a[i][j];

    a[k][0] = a[k][1];
    for(int j = 1; j < k - 1; ++j)
        a[k][j] = a[k][j + 1];
    a[k][k - 1] = a[k][0];

    for(int i = 1; i <= n; ++i, cout << "\n")
        for(int j = 1; j <= n; ++j)
            cout << a[i][j] << " ";

    return 0;
}