#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N,m;
    cin>>m;
    while(m--){
        cin >> N;
        int number[10] = {0}; //宣告一個陣列存放數字（最多10個）
        int counter[10] = {0}; //存放每個數字的「位數總和」
        for(int i = 0; i < N; i++)
        {
            cin >> number[i];
            int m = number[i]; //複製一份出來計算（不改原本的 number）
            while(m > 0)
            {
                counter[i] += m % 10; //取出個位數加進去
                m /= 10;  //去掉個位數（向右移一位）
            }
        }
         for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                if (counter[i] > counter[j] || (counter[i] == counter[j] && number[i] > number[j])) {
                    //如果第 i 個數字的「數字總和」比第 j 個大 → 要交換
                    //如果「數字總和相等」，但原始數字比較大 → 也要交換
                    swap(counter[i], counter[j]);
                    swap(number[i], number[j]);
                }
            }
        }
        for(int i = 0; i < N; i++)
        {
            cout << number[i];
            if(i != N - 1){
                cout << " "; // 數字中間加空格
            }
            else{
                cout << endl;
            }
        }
    }
    return 0;
}
