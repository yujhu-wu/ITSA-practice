#include <iostream>
#include<cmath>

using namespace std;

int rec(int a);
int main()
{
    int n;
    while(cin >> n)
    {
        cout << rec(n) << endl;
    }
    return 0;
}

int rec(int a)
{
    if(a == 0 || a == 1)
    {
        return a + 1;
    }
    else
    {
        return rec(a - 1) + rec(ceil(a / 2));
    }
}
