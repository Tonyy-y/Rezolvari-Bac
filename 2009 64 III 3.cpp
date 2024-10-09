#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("date.in");

int a[1001], m, i = 1, j = 1, c = 1; 

int main()
{
    fin >> a[1];
    while(fin >> a[++i])
        if(a[i] < a[i - 1])
            ++c;
        else
        {
            if(c > m)
            {
                m = c;
                j = i - 1;
            }   
            c = 1; 
        }
    if(c > m)
    {
        m = c;
        j = i - 1;
    }
    for(i = j - m + 1; i <= j; ++i)
        cout << a[i] << " ";

    fin.close();
    return 0;
}