#include <iostream>
using namespace std;

int n, k, a[401][21];

int main()
{
    cin >> n >> k;
    for(int i = 1, c = 0; i <= n * k; ++i, cout << "\n")
    {
        if((i - 1) % k == 0)
            c++;
        a[i][1] = c;
        cout << c << " ";
        for(int j = 2; j <= n; ++j)
            cout << (a[i][j] = a[i][j - 1] + 1) << " ";
    }

    return 0;
}