#include <iostream>

using namespace std;

int main()
{
    int m, n;
    while(cin >> n >> m)
    {
        if(n * n + m * m <= 10000)
        {
            cout << "inside" << endl;
        }
        else
        {
            cout << "outside" << endl;
        }
    }
    return 0;
}
