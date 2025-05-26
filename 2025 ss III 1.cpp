#include <iostream>
using namespace std;

int diviz(int n)
{
    int ans = 1;
    for(int d = 2; d * d <= n; ++d)
        if(n % (d * d) == 0)
            ans = d * d;
    return ans;
}

int main()
{
    cout << diviz(72);

    return 0;
}