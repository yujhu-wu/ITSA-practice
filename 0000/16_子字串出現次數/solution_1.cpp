#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    while (cin >> a >> b) // 從標準輸入讀取兩個字串
    {
        int counter = 0; // 計數器，用於計算字串出現的次數
        size_t pos = 0; // 搜尋起始位置
        while ((pos = b.find(a, pos)) != string::npos) // 在字串 b 中尋找字串 a 的位置，當找不到時停止
        {
            counter++; // 找到一個匹配，計數器加一
            pos += 1; // 將搜尋位置向右移動一位，以處理重疊匹配
        }
        cout << counter << endl; // 輸出字串 a 在字串 b 中出現的次數
    }
    return 0;
}
