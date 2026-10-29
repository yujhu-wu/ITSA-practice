# 題目 22. 圈圈叉叉

> ITSA 基礎題練習 · 第 0000 輪 · [回到本輪目錄](../README.md)

**程式碼檔案：** [solution.cpp](solution.cpp)

---

問題描述 ：  
OX 遊戲是大家小時候的童年記憶，甚至在長大後，無聊時還是會玩一下呢 ! 但當你一個人時，是否也能讓電腦跟你玩呢 ?  
輸入說明 ：  
輸入一個 3*3 的 2 維矩陣，矩陣內容， 0 代表 O ， 1 代表 X 。註：每列數字之間均有空格隔開。  
輸出說明 ：  
輸出這場 OX 遊戲是否有勝負之分。註：輸出結尾需換行。  
範例 ：  

| 輸入範例 | 輸出範例 |
|---|---|
| 1 0 1<br>0 0 1<br>1 0 0 | True |
| 1 0 0<br>0 1 1<br>0 1 0 | False |

```cpp
#include <iostream>

using namespace std;

int main()
{
    int game[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> game[i][j];
        }
    }
    bool win = false;
    for(int x = 0; x < 3; x++)
    {
        if(game[0][x] == game[1][x] && game[1][x] == game[2][x])
        {
            cout << "True" << endl;
            win = true;
            break;
        }
        else if (game[x][0] == game[x][1] && game[x][1] == game[x][2])
        {
            cout << "True" << endl;
            win = true;
            break;
        }
    }
    if(!win)
    {
        if(game[0][0] == game[1][1] && game[1][1] == game[2][2])
        {
            cout << "True" << endl;
            win = true;
        }
        else if(game[0][2] == game[1][1] && game[1][1] == game[2][0])
        {
            cout << "True" << endl;
            win = true;
        }
        else
        {
            cout << "False" << endl;
        }
    }
    return 0;
}
```cpp
