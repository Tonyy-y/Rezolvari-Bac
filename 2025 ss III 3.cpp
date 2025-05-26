#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int x, y, z, v[101], ans;

int main()
{
    while(fin >> x >> y >> z)
    {
        if(x < y)
        {
            int aux = x;
            x = y;
            y = aux;
        }
        if(x < z)
        {
            int aux = x;
            x = z;
            z = aux;
        }
        if(x * x == y * y + z * z && ++v[x] > ans)
            ans = v[x];  
    }
    cout << ans;

    fin.close();
    return 0;
}