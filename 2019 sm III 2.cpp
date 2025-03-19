#include <iostream>
#include <cstring>
using namespace std;
    
char s[51], r[51];

int main()
{
    cin.getline(s, 51);
    for(char* p = strtok(s, " "); p; p = strtok(nullptr, " "))
    {
        if(p[strlen(p) - 1] == '.')
        {
            if(p[0] == 'C')
                strcat(r, "COLEGIUL ");
            else if(p[0] == 'L')
                strcat(r, "LICEUL ");
            else if(p[0] == 'N')
                strcat(r, "NATIONAL ");
            else if(p[0] == 'T')
                strcat(r, "TEORETIC ");
            continue;
        }
        strcat(r, p);
        strcat(r, " ");
    }
    cout << r;

    return 0;
}