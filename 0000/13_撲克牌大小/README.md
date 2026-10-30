# 題目13. 撲克牌大小

> ITSA基礎題練習 · 第0000輪 · [回到本輪目錄](../README.md)

**程式碼檔案**：[solution_1.cpp](solution_1.cpp)、[solution_2.cpp](solution_2.cpp)

---

問題描述 ：  
撲克牌的遊戲有很多種，像是大老二、撿紅點等。然而，現在您要參與的是比大小遊戲，每張牌各有其花色和數字，大小比較主要以花色為主，黑桃 > 紅心 > 方塊 > 梅花；倘若花色相同時，則比較數字。  
輸入說明 ：  
第一列的整數，代表撲克牌的疊數，其後有若干列，每列即為一疊牌的內容，每張牌分別以英文、數字作表示，其中S代表黑桃、H代表紅心、D代表方塊、C代表梅花。每筆資料分別以空白隔開。  
輸出說明 ：  
印出排列過後的撲克牌。一行是一 疊 牌， 每張牌以空白隔開。  
範例 ：  

| 輸入範例 | 輸出範例 |
|---|---|
| 4                                                                  H5 D4 S2 C13                                                    D8 S3 D10 C12 H7                                             H6 S3                                                     C5 D11 S1 | S2 H5 D4 C13                                             S3 H7 D10 D8 C12                                       S3 H6                                                         S1 D11 C5 |

```cpp
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void sortPoke (string* a, int n);
int main()
{
    int input = 0, n = 0;
    string Str, s;

    while(cin >> input){ // 輸入測試資料筆數
        //cin.ignore(1,'\n'); // 消除於字串後的換行符號

        // 開始時動態分配一個足夠大的陣列
        const int maxSize = 100; // 假設最大資料筆數為100
        string* pokeS = new string[maxSize];

        for(int i = 0; i < input; i++) // 依資料筆數決定處理次數
        {
            getline(cin, Str); // 讀入一整行
            istringstream cutStr(Str); // 轉換成可分割型態

            while(getline(cutStr, s, ' ')) // 分割並推入陣列
            {
                pokeS[n++] = s;
            }

            sortPoke(pokeS, n); // 排序

            // 輸出排序結果
            for(int j = 0; j < n; j++)
            {
                if(j == n - 1) cout << pokeS[j] << endl;
                else cout << pokeS[j] << " ";
            }

            n = 0; // 重置 n
        }

        // 釋放動態分配的記憶體
        delete[] pokeS;
    }
    return 0;
}

void sortPoke (string* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            string t;
            if(a[i][0] > a[j][0])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(a[i][0] == a[j][0])
            {
                string t, bN = a[i].substr(1, 2), sN = a[j].substr(1, 2);
                istringstream bigN(bN);
                istringstream smaN(sN);
                int b = 0, s = 0;
                bigN >> b;
                smaN >> s;
                if(b < s)
                {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
    }
}
```cpp

```cpp
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int suitvalue(char suit)
{
    if(suit == 'S') return 4;
    if(suit == 'H') return 3;
    if(suit == 'D') return 2;
    return 1;
}
int cardvalue(string card)
{
    char suit = card[0];
    int number = stoi(card.substr(1));
    return suitvalue(suit) * 100 + number;
}
bool compare(string a, string b)
{
    return cardvalue(a) > cardvalue(b);
}

int main() 
{
    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);
        string cards[50];
        int j = 0;
        while(ss >> cards[j])
        {
            j++;
        }
        sort(cards, cards + j, compare);
        for (int k = 0; k < j; ++k) 
        {
            cout << cards[k];
            if (k < j - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
```cpp
