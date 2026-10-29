#include <iostream>

using namespace std;

int main()
{
    int m, n;
    while(cin >> n >> m)
    {
        if(n * n + m * m <= 10000)//x^2 + y^2 ≤ r^2這是判斷的數學方程式
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
