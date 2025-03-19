#include <iostream>
using namespace std;

void inserare(int& n)
{
    int c = 1, nr = n;
    n = 0;
    while(nr > 9)
    {
        n = (abs(nr % 10 - nr / 10 % 10) * 10 + nr % 10) * c + n;
        c *= 100;
        nr /= 10;
    }
    n = nr * c + n;
}

int main()
{
    int n = 911;
    inserare(n);
    cout << n;

    return 0;
}