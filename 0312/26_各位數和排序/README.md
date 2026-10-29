# 題目 26. 各位數和排序

> ITSA 基礎題練習 · 第 0312 輪 · [回到本輪目錄](../README.md)

**程式碼檔案：** [solution.cpp](solution.cpp)

---

問題描述 ：  
輸入一整數N及N個整數，請依照十進位中各位數字和由小到大排序輸出。如果各位數字和相等則比較數值由小到大排列。例如： 9122的各位數字和為 9+1+2+2=14、3128 的各位數字和為 3+1+2+8=14而5112的各位數字和為 5+1+1+2=9。所以輸入 9122 3128 5112 需輸出 5112 3128 9122 ，這是因為 5112(9) < 3128(14) < 9122(14)，其中又因為 3128 與 9122 兩者的各位數字和都是 14，所以將 數值小的 3128 放前面。  
輸入說明 ：  
第一行輸入 N ，第二行輸入 N 個整數，用空白隔開，N<10。  
輸出說明 ：  
輸出排序結果。  
範例 ：  

| 輸入範例 | 輸出範例 |
|---|---|
| 3<br>9122 3128 5112 | 5112 3128 9122 |
| 4<br>1725 3821 2011 1428 | 2011 3821 1428 1725 |

```cpp
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int number[10] = {0};
    int counter[10] = {0};
    for(int i = 0; i < N; i++)
    {
        cin >> number[i];
        int m = number[i];
        while(m > 0)
        {
            counter[i] += m % 10;
            m /= 10;
        }
    }
     for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (counter[i] > counter[j] || (counter[i] == counter[j] && number[i] > number[j])) {
                swap(counter[i], counter[j]);
                swap(number[i], number[j]);
            }
        }
    }
    for(int i = 0; i < N; i++)
    {
        cout << number[i];
        if(i != N - 1)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }
    return 0;
}
```cpp
