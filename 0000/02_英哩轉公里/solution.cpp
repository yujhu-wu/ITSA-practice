#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double m;
    while(cin >> n)
    {
        m = n * 1.6;
        cout << fixed << setprecision(1) << m << endl;
    }
    return 0;
}
