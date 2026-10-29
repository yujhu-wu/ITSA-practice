#include <iostream>

using namespace std;

int main()
{
    char c[10];
    int cn[10];
    int p1[10] = {0};
    int p2[10] = {0};
    for(int i = 0; i < 10; i++)
    {
        cin >> c[i];
        if(c[i] == 'X' || c[i] == 'x')
        {
            cn[i] = 10;
        }
        else
        {
            cn[i] = c[i] - '0';
        }
    }
    for(int i = 1; i < 10; i++)
    {
        p1[i] = p1[i - 1] + cn[i];
    }
    p2[9] = p1[9];
    for(int j = 1; j < 10; j++)
    {
        p2[j] = p2[j - 1] + p1[j];
    }
    if(p2[9] % 11 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
