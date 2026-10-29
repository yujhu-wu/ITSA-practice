#include <iostream>

using namespace std;

int gcd(int a, int b);
int main()
{
    int m, n, c = 0;
    while(cin >> m >> n)
    {
        if(m > n)
        {
            c = m;
            m = n;
            n = c;
        }
        cout << gcd(m, n) << endl;
    }

    return 0;
}
int gcd(int a, int b)
{
    int f = a % b;
    if(f == 0) return b;
    else return gcd(b, f);
}
