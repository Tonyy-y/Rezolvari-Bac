#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.txt");

bool vc[10];
int n, a;

int main()
{
    fin >> n;
    for(int i = 1; i <= n; ++i)
    {
        fin >> a;
        while(a)
        {
            vc[a % 10] = true;
            a /= 10;
        }
    }
    for(int i = 0; i <= 9; ++i)
        if(vc[i])
            cout << i << " ";
       
    fin.close();
    return 0;
}