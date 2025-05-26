#include <iostream>
#include <cstring>
using namespace std;

char s[101], m[101];

int main()
{
    cin.getline(s, 101);
    for(char* p = strtok(s, " "); p; p = strtok(nullptr, " "))
    {
        strcat(m, p);
        strcat(m, " - ");
    }
    m[strlen(m) - 3] = '\0';
    strcpy(s, m);
    cout << s;

    return 0;
}