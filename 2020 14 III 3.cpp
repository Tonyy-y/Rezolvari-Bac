#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.in");

int x, a = 1e9, b = 1e9, c = 1e9;

int main()
{
    while(fin >> x)
        if(x % 100 == 20)
        {
            if(x < a)
            {
                c = b;
                b = a;
                a = x;
            }
            else if(x < b)
            {
                c = b;
                b = x;
            }
            else if(x < c)
                c = x;
        }
    cout << a << " " << b << " " << c;

    fin.close();
    return 0;
}