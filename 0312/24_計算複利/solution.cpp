#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double r, n, p; //long儲存更精確的小數計算
    while(cin >> r >> n >> p){
        double ans = 0.0; //初始化0.0
        r += 1.0; //r= 1 + r，表示 (1 + r) 的成長
        for(int i = 0; i < n; ++i){
            ans = (ans + p) * r;  // 累積利息與本金
        }
        cout << (long long)ans << endl; // 轉換為整數（無條件捨去）
    }
    return 0;
}
