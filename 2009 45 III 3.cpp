#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.txt");

int fr[100], n, a;

int main()
{
    fin >> n;
    for(int i = 1; i <= n; ++i)
    {
        fin >> a;
        ++fr[a];
    }
    for(int i = 0; i <= 99; ++i)
        for(int j = 1; j <= fr[i]; ++j)
            cout << i << " ";

    fin.close();
    return 0;
}