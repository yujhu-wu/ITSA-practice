#include <iostream>

using namespace std;

int main()
{
    int n, a1, a2, a3;
    int c1 = 0, c2 = 0, c3 = 0;
    int total = 0;
    int refund = 0;
    scanf("%d,%d,%d,%d", &n, &a1, &a2, &a3);
    total = a1 *15 + a2 * 20 + a3 * 30;
    if(total >= n)
    {
        cout << "0" << endl;
    }
    else
    {
        refund = n - total;
        c3 = refund / 50;
        refund = refund % 50;
        c2 = refund / 5;
        refund = refund % 5;
        c1 = refund / 1;
        cout << c1 << "," << c2 << "," << c3 << endl;
     }
    return 0;
}
