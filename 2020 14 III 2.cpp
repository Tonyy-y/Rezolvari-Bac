#include <iostream>
#include <cstring>
using namespace std;

char s[101];

int main()
{
    cin.getline(s, 101);
    for(int i = 0; s[i]; ++i)
        if(s[i] == '-')
            strcpy(s + i, s + i + 1);
    cout << s;

    return 0;
}