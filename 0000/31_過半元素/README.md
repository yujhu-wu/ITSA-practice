# 題目 31. 過半元素

> ITSA 基礎題練習 · 第 0000 輪 · [回到本輪目錄](../README.md)

**程式碼檔案：** [solution.cpp](solution.cpp)

---

問題描述 ：  
一個含 N 個整數的序列中，出現頻率超過 N/2 的整數稱為『過半元素』。寫一個程式求一整數序列是否有過半元素。  
輸入說明 ：  
一整數序列以空白鍵隔開數字；0 < N < 11; 序列中的數字都是integer; 輸入包含多行，一行為一筆測資  
輸出說明 ：  
若有 過半元素， 輸出該數； 否則輸出 NO 。  
範例 ：  

| 輸入範例 | 輸出範例 |
|---|---|
| 23 34 34 5 5 34 34                                           <br>1 -1 1 -1 1 -1 1 -1 1                                       <br>1 2 3 4 5 6 7 8 9 10                                            <br>5 5 5 5 5 5 5 5 5 5 5 5                                   <br>543 7873 -9 27 -88 | 34                                                        <br>1                                                           <br>NO                                                         <br>5                                                              NO |

```cpp
#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        // 使用 istringstream 將每行字串轉換為串流
        istringstream iss(line);
        map<int, int> freq;
        int num;
        int N = 0;
        // 計算每個數字的出現頻率
        while (iss >> num) {
            freq[num]++;
            N++;
        }
        bool found = false;
        for (auto it = freq.begin(); it != freq.end(); ++it) {
            if (it->second > N / 2) {
                cout << it->first << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "NO" << endl;
        }
    }
    return 0;
}
```cpp

這個 while 迴圈用於從 istringstream 中讀取整數，並計算每個整數的出現頻率。這裡解釋一下這個 while 迴圈的每個步驟：  
1. iss >> num：這一行程式碼會從 iss 中讀取一個整數，並將其存儲在 num 中。當 iss 中還有整數時，這個條件會為真，迴圈會繼續執行。  
1. freq[num]++：這一行程式碼會將 num 這個整數作為鍵，並將對應的值加一。也就是說，這裡在計算每個整數出現的次數。  
1. N++：這一行程式碼會計算目前已經讀取的整數的總數。這樣做是為了之後判斷是否有過半元素。  
istringstream 是 C++ 中的一個類別，它允許將字串作為輸入串流來處理。它通常用於將字串解析為不同的數據型別，例如整數、浮點數等。  
在這個程式中，我們使用 istringstream 將一個包含空格分隔數字的字串轉換成一個串流，從而可以逐個讀取其中的整數。這樣做的好處是我們可以利用串流操作符 >> 來依次讀取字串中的數字，就像從標準輸入流或檔案中讀取數字一樣方便。這樣我們就可以方便地處理來自字串的數據，並將它們轉換為我們需要的型別。
