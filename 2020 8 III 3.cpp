#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.in");

int x, i, m, f[10], p[10];

int main()
{
    while(fin >> x)
    {
        int c = x % 10;
        p[c] = ++i;
        if(++f[c] > m)
            m = f[c];
    }
    for(int i = 0; i <= 9; ++i)
        if(f[i] == m)
            cout << p[i] << " ";

    fin.close();
    return 0;
}