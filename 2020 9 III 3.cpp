#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int k, x, c, m, nr;

int main()
{
    fin >> k;
    while(fin >> x)
    {
        if(x % k == 0)
        {
            if(++c > m)
            {
                m = c;
                nr = 1;
            }
            else if(c == m)
                nr++;
            continue;
        }
        c = 0;
    }
    cout << m << " " << nr;

    fin.close();
    return 0;
}