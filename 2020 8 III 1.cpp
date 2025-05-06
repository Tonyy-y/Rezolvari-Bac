#include <iostream>
using namespace std;

int suma(int n)
{
    int s = 0;
    for(int i = 2; i < n; ++i)
        if(n % i == 0)
        {
            bool prim = true;
            for(int j = 2; j < i; ++j)
                if(i % j == 0)
                    prim = false;
            if(prim)
                s += i;
        }
    return s;
}

int main()
{
    cout << suma(12);

    return 0;
}