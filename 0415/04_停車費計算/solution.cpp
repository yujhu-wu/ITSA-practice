#include <iostream>

using namespace std;

int main()
{
    int hr1, hr2, minute1, minute2;
    int start = 0, endtime = 0;
    int total = 0;
    while(cin >> hr1 >> minute1 >> hr2 >> minute2)
    {
        start = hr1 * 60 + minute1;
        endtime = hr2 * 60 + minute2;
        total = endtime - start;
        if(total <= 120 && total > 0)//大於小於要分兩個條件寫，2小時內=包含兩小時
        {
            cout << total / 30 * 30 << endl;
        }
        else if(total > 120 && total <= 240)//超過2小時，但未滿4小時的部份
        {
            cout << (total - 120) / 30 * 40 + 120 << endl;//兩小時的部分前面已經算過了，時間上要扣掉120分鐘
        }
        else
        {
            cout << (total - 240) / 30 *60 + 280 << endl;
        }
    }
    return 0;
}
