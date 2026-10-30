# 題目28. 統一發票對獎

> ITSA基礎題練習 · 第0415輪 · [回到本輪目錄](../README.md)

**程式碼檔案**：[solution_1.cpp](solution_1.cpp)、[solution_2.cpp](solution_2.cpp)

---

問題描述 ：  
統一發票號碼共有八位數，每期開出一組特獎和三組頭獎號碼。特獎為8位數號碼與特獎號碼相同者，獎金200萬元；頭獎為8位數號碼與頭獎號碼相同者，獎金20萬元；二獎為末7位數號碼與頭獎中獎號碼末7位相同者，各得獎金4萬元；三獎為末6位數號碼與頭獎中獎號碼末6位相同者，各得獎金1萬元；四獎為末5位數號碼與頭獎中獎號碼末5位相同者，各得獎金4千元；五獎為末4位數號碼與頭獎中獎號碼末4位相同者各得獎金1千元；六獎為末3位數號碼與頭獎中獎號碼末3位相同者各得獎金2百元。假設所有獎項均以中獎金額較大的優先，請寫一模擬對獎程式，讀入開獎號碼及統一發票號碼，印出中獎種類及張數，以及中獎總金額。  
輸入說明 ：  
第一行為一8位整數表示特獎開獎號碼，接下來有三行，每行為一8位整數代表頭獎開獎號碼，第五行為一正整數N( 1 ≤ N ≤ 100000 )，代表共有N張發票要對獎，之後有N行，每行為一張發票號碼(8位整數)。  
輸出說明 ：  
輸出各獎項中獎張數於一行，獎項依序排列，自特獎開始，每獎項張數間空一空格，最後空一行後輸出總共中獎金額。  
範例 ：  

| Sample Input: | Sample Output: |
|---|---|
| 14672884<br>79807980<br>85312452<br>94251069<br>3<br>79807980<br>84556452<br>15661069<br> | 0 1 0 0 0 1 1<br>201200<br> |

```cpp
#include <iostream>

using namespace std;

int main()
{
    int special;
    cin >> special;
    int a[3];
    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }
    int n;
    cin >> n;
    int a0 = 0, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0;
    int money = 0;
    while(n--){
        int b;
        cin >> b;
        int b1 = b % 10000000;
        int b2 = b % 1000000;
        int b3 = b % 100000;
        int b4 = b % 10000;
        int b5 = b % 1000;
        if(b == special){
            a0++;
        }
        else if(b == a[0] || b == a[1] || b == a[2]){
            a1++;
        }
        else if(b1 == (a[0] % 10000000) || b1 == (a[1] % 10000000) || b1 == (a[2] % 10000000)){
            a2++;
        }
        else if(b2 == (a[0] % 1000000) || b2 == (a[1] % 1000000) || b2 == (a[2] % 1000000)){
            a3++;
        }
        else if(b3 == (a[0] % 100000) || b3 == (a[1] % 100000) || b3 == (a[2] % 100000)){
            a4++;
        }
        else if(b4 == (a[0] % 10000) || b4 == (a[1] % 10000) || b4 == (a[2] % 10000)){
            a5++;
        }
        else if(b5 == (a[0] % 1000) || b5 == (a[1] % 1000) || b5 == (a[2] % 1000)){
            a6++;
        }
    }
    money = a0 * 2000000 + a1 * 200000 + a2 * 40000 + a3 * 10000 + a4 * 4000 + a5 * 1000 + a6 * 200;
    cout << a0 << " " << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << " " << a6 << endl;
    cout << money << endl;
    return 0;
}
```cpp

```cpp
#include <iostream>
#include <string.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    string J;//頭獎
    string s1, s2, s3;//特獎
    cin >> J >> s1 >> s2 >> s3;
    int count[7];//數量計算
    fill(count, count+7, 0);
    long int money = 0;//總金額
    int m[6] = {200000, 40000, 10000, 4000, 1000, 200};
    int N;//發票數量
    int c = 0;//中幾碼
    cin >> N;
    int mm = 0;//目前的最高金額
    for(int i = 0;i < N;i++) {
        string num;
        cin >> num;
        if(num == J){//中頭獎，其他就不用對了
            money = money + 2000000;
            count[0]++;
        }
        else{
            for(int b = 0; b < 3;b++) {
                if(b == 0){//對第一個特獎
                    for(int j = 7;j >= 0;j--){
                        if(s1[j] == num[j]) c++; //計算中幾碼
                        else break;
                    }
                    for(int j = 8;j >= 3;j--){ //對幾碼相對應的錢
                        if(c == j)
                            if(m[8-j] > mm) mm = m[8-c];
                    }
                    c = 0;
                }
                else if(b == 1){ //對第二個特獎
                    for(int j = 7;j >= 0;j--) {
                        if(s2[j] == num[j]) c++; //計算中幾碼
                        else break;
                    }
                    for(int j = 8;j >= 3;j--){ //對幾碼相對應的錢
                        if(c == j)
                            if(m[8-c] > mm) mm = m[8-c];
                    }
                    c = 0;
                }
                else if(b == 2){ //對第三個特獎
                    for(int j = 7;j >= 0;j--){
                        if(s3[j] == num[j]) c++; //計算中幾碼
                        else break;
                    }
                    for(int j = 8;j >= 3;j--){ //對幾碼相對應的錢

                        if(c == j)
                            if(m[8-c] > mm)
                                mm = m[8-c];
                    }
                    c = 0;
                }
            }
            for(int j = 0;j < 7;j++){ //三個特獎中，最高獎金的數量加一

                if(mm == m[j]) count[j+1]++;
            }
            money = money + mm;
            mm = 0;
        }
    }
    //輸出
    for(int i = 0;i < 7;i++) {
        if(i != 6) cout << count[i] << " ";
        else cout << count[i] << endl;
    }
    cout << money << endl;
}
```cpp
