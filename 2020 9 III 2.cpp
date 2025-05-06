#include <iostream>
#include <cstring>
using namespace std;

int n, m;
char s[21][21];
bool ok;

int main()
{
    cin >> n;
    cin.get();
    for(int i = 1; i <= n; ++i)
        cin >> s[i];
    m = strlen(s[n]);
    for(int i = 1; i < n; ++i)
    {
        if(strlen(s[i]) < m)
            continue;
        bool prefix = true;
        for(int j = 0; j < m; ++j)
            if(s[i][j] != s[n][j])
                prefix = false;
        if(prefix)
        {
            ok = true;
            cout << s[i] << " ";
        }
    }
    if(!ok)
        cout << "nu exista";
    
    return 0;
}