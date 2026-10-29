#include <iostream>

using namespace std;

int main()
{
    int n, i;
    while(cin >> n)
    {
        for(i = 2; i < n; i++)// 從i=2開始，一直測試到n-1
        {
            if(n % i == 0) break;//如果 n%i==0，表示n不是只能被自己整除(除了2)，直接break，跳到輸出NO
        }
        if(i == n) cout << "YES" << endl;//如果前面條件過了(在n-1內無法被取餘0)，n本身又和i數字相等，就是YES
        else cout << "NO" << endl;
    }
    return 0;
}
