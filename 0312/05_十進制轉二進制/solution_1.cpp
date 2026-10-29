#include <iostream>

using namespace std;

int main()
{
    int n, bin[8];
    while(cin >> n)
    {
        if(n < 0) n += 256;
        for(int i = 7; i >= 0; i--)
        {
            bin[i] = n % 2;
            n /= 2;
        }
        for(int i = 0; i < 8; i++)
        {
            if(i == 7) cout << bin[i] << endl;
            else cout << bin[i];
        }
    }
    return 0;
}
