#include <iostream>

using namespace std;

int main()
{
    int n;
    int s, d, max = 0; //max要初始化
    int t[25] = {0}; //t[0]~t[24]代表一天的 24 小時，要初始化
    cin >> n;

    for(int j = 0; j < n; j++) //while(n--)也可以
    {
        cin >> s >> d;
        for(int i = s; i < d; i++) //當 s ≤ i < d 時，t[i]++ 表示這個時間點 i 內有活動。
        {
            t[i]++;//表示時間i內有多少個活動同時進行
        }
    }
    for(int k = 0; k < 25; k++)
    {
        if(t[k] > max) //如果t[k]的活動數比 max 大
        {
            max = t[k]; //更新max，記錄最大活動重疊數
        }
    }
    cout << max << endl;
    return 0;
}
