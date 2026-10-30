# 題目10. 輾轉相除法

> ITSA基礎題練習 · 第0415輪 · [回到本輪目錄](../README.md)

**程式碼檔案**：[solution_1.cpp](solution_1.cpp)、[solution_2.cpp](solution_2.cpp)

---

問題描述：  
給定二個正整數，利用輾轉相除法求其最大公因數。  
輸入說明：  
給定二個正整數  
輸出說明：  
輸出最大公因數  
範例：  
假設輸入為300與250, 則輸出為50  

> 💡 **筆記**  
>
> 要確保m<=n，設新的c=0換位置[c=m，m=n，n=c]  
> 呼叫gcd自己用gcd(m,n)，gcd內部設(int a, int b)  
> 如果餘數為0，則b就是最大公因數f=0，ret b  

```cpp
#include <iostream>

using namespace std;

int gcd(int a, int b);
int main()
{
    int m, n, c = 0;
    while(cin >> m >> n)
    {
        if(m > n)//確保m<=n，這樣m會是較小的數，n會是較大的數。
        {
            c = m;
            m = n;
            n = c;
        }
        cout << gcd(m, n) << endl;
    }

    return 0;
}
int gcd(int a, int b)
{
    int f = a % b;// 計算a除以b的餘數
    if(f == 0) return b;//如果餘數為0，則b就是最大公因數
    else return gcd(b, f);//否則繼續遞迴計算GCD(b, f)
}
```cpp

```cpp
//最小公倍數LCM(a,b)= ∣a×b∣/ GCD(a,b)
#include <iostream>

using namespace std;

int gcd(int a,int b);
int main()
{
    int n,m;
    int c=0;
    cin>>m>>n;
    if(m>n){
        c=m;
        m=n;
        n=c;
    }
    cout<<(abs(m*n))/gcd(m,n)<<endl;
    return 0;
}

int gcd(int a,int b){
    int f=a%b;
    if(f==0) return b;
    else return gcd(b,f);
}

```cpp
