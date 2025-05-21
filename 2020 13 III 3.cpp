#include <iostream>
#include <fstream>
using namespace std;

ofstream fout("bac.txt");

int main()
{
    int x;
    cin >> x;
    while(x)
    {
        fout << x << " ";
        x /= 2;
    }

    fout.close();
    return 0;
}