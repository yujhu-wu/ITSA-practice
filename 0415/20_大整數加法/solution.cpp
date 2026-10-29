#include <iostream>
#include <string>
using namespace std;

// 大數相加函式
string bigAdd(string a, string b) {
    string res = "";  //res 是用來存放「加法結果」的大數字，一開始把它設成空的
    int carry = 0, sum; // carry 是進位用的變數
    
    //i 是字串 a 最後一位的索引（個位數），j 是字串 b 最後一位的索引
    int i = a.size() - 1, j = b.size() - 1;
    
    while (i >= 0 || j >= 0 || carry) { //carry != 0，只要 a 或 b 還有沒加完的位數，或者還有進位沒處理，就繼續加
        sum = carry;
        if (i >= 0) sum += a[i--] - '0'; // 轉換成數字加總
        if (j >= 0) sum += b[j--] - '0';
        
        carry = sum / 10; // 進位
        res = char(sum % 10 + '0') + res; // 把個位數加進結果前面
    }
    return res;
}

int main() {
    int N;
    cin >> N;
    while (N--) {
        string a, b;
        cin >> a >> b;
        cout << bigAdd(a, b) << endl;
    }
    return 0;
}
