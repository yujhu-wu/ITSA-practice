# 題目 16. 子字串出現次數

> ITSA 基礎題練習 · 第 0415 輪 · [回到本輪目錄](../README.md)

**解題關鍵：** `substr(pos位置, len長度)`

**程式碼檔案：** [solution.cpp](solution.cpp)

---

問題描述：  
給予兩個英文字串，請計算出第一個字串出現在第二個字串中的次數。  
輸入說明：  
輸入分為兩行，第一行是由英文大小寫字母與數字所組成的字串，長度不超過 128 個字母。  
第二行也是由英文大小寫字母與數字所組成的字串，長度不超過 512 個字母。  
輸出說明：  
第一個字串出現在第二個字串中的次數。  
範例：  

| Sample Input | Sample Output |
|---|---|
| aa<br>aaa123bbab | 2 |
| baba<br>12b3bbababa12 | 2 |
| baa<br>ababaabbbb | 1 |

```cpp
//substr(pos位置, len長度)
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;

    while(cin >> a >> b) {
        int cnt = 0;
        int la = a.length();
        int lb = b.length();

        // 遍歷 `b`，找長度等於 `a` 的子字串
        for(int i = 0; i <= lb - la; i++) {
            if(b.substr(i, la) == a) {
                cnt++;
            }
        }

        cout << cnt << endl; // 輸出計數結果
    }

    return 0;
}

```cpp
