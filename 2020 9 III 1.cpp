#include <iostream>
using namespace std;

void suma(int n, int& s)
{
    bool f[10] = {false};
    while(n)
    {
        int c = n % 10;
        if(c % 2 && !f[c])
        {
            s += c;
            f[c] = true;
        }
        n /= 10;
    }
}

int main()
{
    int s = 0;
    suma(4713835, s);
    cout << s;

    return 0;
}