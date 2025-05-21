#include <iostream>
using namespace std;

void putere(int n, int& d, int& p)
{
    p = 1e9;
    int i = 2;
    while(n > 1)
    {
        int c = 0;
        while(n % i == 0)
        {
            n /= i;
            c++;
        }
        if(c && c < p)
        {
            p = c;
            d = i;
        }
        i++;
    }
}

int main()
{
    int n = 10780, d = 0, p = 0;
    putere(n, d, p);
    cout << d << " " << p;

    return 0;
}