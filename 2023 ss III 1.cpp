#include <bits/stdc++.h>
using namespace std;

void Putere(int n, int& x, int& p)
{
    x = 2;
    while(true)
    {
        double aux = log2(n) / log2(x);
        p = aux;
        if(p == aux)
            return;
        ++x;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 12, x, p;
    Putere(n, x, p);
    cout << x << " " << p;

    return 0;
}