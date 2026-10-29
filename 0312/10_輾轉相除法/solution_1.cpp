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
