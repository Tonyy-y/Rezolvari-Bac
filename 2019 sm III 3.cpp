#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int n, x, m1 = 1e9, m2 = 1e9, M1 = -1, M2 = -1;

int main()
{
    fin >> n;
    for(int i = 1; i <= n; ++i)
    {
        fin >> x;
        if(x % 2 && x > M1)
            M1 = x;
        if(x % 2 == 0 && x > M2)
            M2 = x;
    }
    for(int i = 1; i <= n; ++i)
    {
        fin >> x;
        if(x % 2 && x < m1)
            m1 = x;
        if(x % 2 == 0 && x < m2)
            m2 = x;
    }
    if(M1 < m2 && M2 < m1)
        cout << "DA";
    else
        cout << "NU";

    fin.close();
    return 0;
}