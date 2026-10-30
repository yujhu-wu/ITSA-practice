# 題目40. ISBN驗證

> ITSA基礎題練習 · 第0000輪 · [回到本輪目錄](../README.md)

**程式碼檔案**：[solution_1.cpp](solution_1.cpp)、[solution_2.cpp](solution_2.cpp)

---

問題描述：  
ISBN(International Standard Book Number)是一種世界共通的書籍編碼方法，世界上任何一本書籍之出版，皆有著唯一的一組ISBN碼。此碼由十個位數組成，每一位數可以為0~9的任何一個數字，或者為X，代表此位數為10。其判斷方法如下，首先，將此ISBN碼的十個位數分開，自左而右依次為第一位數，第二位數至第十位數，接著進行第一次的累加，使得第二位數成為第一位數到第二位數的和，第三位數為第一位數到第三位數的累加和，第十位數為第一位數到第十位數的累加和；進行完第一次的累加和後，接著再依照相同之方法進行第二次的累加動作，我們稱此時最後所求得之累加和為此ISBN碼之識別碼，倘若此識別碼為11的倍數，則此ISBN碼為合法的。例如，若輸入之ISBN碼為0 1 3 1 6 2 9 5 9 X，則其運算之過成如下表所示：  

| ISBN碼 | 0 | 1 | 3 | 1 | 6 | 2 | 9 | 5 | 9 | 10(X) |
|---|---|---|---|---|---|---|---|---|---|---|
| 第一次累加和 | 0 | 1 | 4 | 5 | 11 | 13 | 22 | 27 | 36 | 46 |
| 第二次累加和 | 0 | 1 | 5 | 10 | 21 | 34 | 56 | 83 | 119 | 165 |

經由計算可得其識別碼為165，乃是11之倍數，故此為一合法之ISBN碼。  
輸入說明 ： 輸入一串ISBN碼，以空格隔開。  
輸出說明 ： 合法ISBN碼，印出 ” YES ” ，不合法ISBN碼，印出 ” NO ” 。  
範例：  

| Sample Input | Sample Output |
|---|---|
| 0 1 3 1 6 2 9 5 9 X | YES |

```cpp
#include <iostream> 

using namespace std; 

int main() 
{ 
    char c[10]; 
    int cn[10]; 
    int p1[10] = {0}; 
    int p2[10] = {0}; 

    for(int i = 0; i < 10; i++) 
    { 
        cin >> c[i]; 
        if(c[i] == 'X') 
        { 
            cn[i] = 10; 
        } 
        else 
        { 
            cn[i] = c[i] - '0'; 
        } 
    } 

    for(int i = 0; i < 10; i++) 
    { 
        if(i > 0) 
        { 
            p1[i] = p1[i - 1] + cn[i]; 
        } 
        else 
        { 
            p1[i] = cn[i]; 
        } 
    } 

    for(int j = 0; j < 10; j++) 
    { 
        if(j > 0) 
        { 
            p2[j] = p2[j - 1] + p1[j]; 
        } 
        else 
        { 
            p2[j] = p1[j]; 
        } 
    } 

    if(p2[9] % 11 == 0) 
    { 
        cout << "YES" << endl; 
    } 
    else 
    { 
        cout << "NO" << endl; 
    } 

    return 0; 
}
```cpp

### 除錯紀錄(第40題ISBN早期版本)

```cpp
#include <iostream>

using namespace std;

int main()
{
    char c[10];
    int cn[10];
    int p1[10] = {0};
    int p2[10] = {0};
    for(int i = 0; i < 10; i++)
    {
        cin >> c[i];
        if(c[i] == 'X' || c[i] == 'x')
        {
            cn[i] = 10;
        }
        else
        {
            cn[i] = c[i] - '0';
        }
    }
    for(int i = 1; i < 10; i++)
    {
        p1[i] = p1[i - 1] + cn[i];
    }
    p2[9] = p1[9];
    for(int j = 1; j < 10; j++)
    {
        p2[j] = p2[j - 1] + p1[j];
    }
    if(p2[9] % 11 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

```cpp

在這段程式碼中，一個潛在的問題是將cn陣列的值儲存在p1陣列中。在第一個迴圈中，p1陣列可能會被初始化為除了第一個元素外，所有的元素都是0。這可能會導致第二次累加p2陣列時出現錯誤。
