#include <iostream>
using namespace std;

void perechi(int n)
{
    bool ok = false;
    for(int i = 1; i * i < n; ++i)
        if(n % i == 0)
        {
            int x = n / i;
            if(i % 2 != x % 2)
            {
                ok = true;
                cout << "[" << i << " " << x << "] ";
            }
        }
    if(!ok)
        cout << "nu exista";
}

int main()
{
    perechi(144);

    return 0;
}