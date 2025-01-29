#include <bits/stdc++.h>
using namespace std;

ifstream fin("bac.in");

int x, Min, Max, c = 2, p1 = -1, p2;

int main()
{
    ios::sync_with_stdio(false);
    fin.tie(NULL);

    fin >> x;
    Min = Max = x;
    while(fin >> x)
    {
        if(Min <= x && x <= Max)
            if(p1 == -1)
                p1 = p2 = c;
            else
                p2 = c;
        else if(x < Min)
            Min = x;
        else if(x > Max)
            Max = x;
        ++c;
    }
    if(p1 == -1)
        cout << "nu exista";
    else
        cout << p1 << " " << p2;

    fin.close();
    return 0;
}