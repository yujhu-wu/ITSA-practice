#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, T, m, k;
    int price[100];
    cin >> n;
    while(n--)
    {
        int total = 0;
        cin >> T >> m >> k;
        int i;
        for(i = 0; i < k; i++)
        {
            cin >> price[i];
        }
        sort(price, price + i);//讓價格由小到大排列，這樣最便宜的m個物品就會在 price[0] ~ price[m-1]。
        for(int j = 0; j < m; j++)
        {
            total += price[j];
        }
        if(total <= T)
        {
            cout << total << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
