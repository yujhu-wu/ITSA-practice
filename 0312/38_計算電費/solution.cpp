#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double sum = 0;
    double non = 0;
    cin >> n;
    if(n <= 120)
    {
        sum = n * 2.10;
        non = n * 2.10;
    }
    else if(n <= 330)
    {
        sum = 120 * 2.10 + (n - 120) * 3.02;
        non = 120 * 2.10 + (n - 120) * 2.68;
    }
    else if(n <= 500)
    {
        sum = 120 * 2.10 + 210 * 3.02 + (n - 330) * 4.39;
        non = 120 * 2.10 + 210 * 2.68 + (n - 330) * 3.61;
    }
    else if(n <= 700)
    {
        sum = 120 * 2.10 + 210 * 3.02 + 170 * 4.39 + (n - 500) * 4.97;
        non = 120 * 2.10 + 210 * 2.68 + 170 * 3.61 + (n - 500) * 4.01;
    }
    else
    {
        sum = 120 * 2.10 + 210 * 3.02 + 170 * 4.39 + 200 * 4.97 + (n - 700) * 5.63;
        non = 120 * 2.10 + 210 * 2.68 + 170 * 3.61 + 200 * 4.01 + (n - 700) * 4.50;
    }
    cout << "Summer months:" << fixed << setprecision(2) << sum << endl;
    cout << "Non-Summer months:" << fixed << setprecision(2) << non << endl;
    return 0;
}
