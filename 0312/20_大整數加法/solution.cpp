#include <iostream>
#include <string>
using namespace std;

// 大數相加函式
string bigAdd(string a, string b) {
    string res = "";
    int carry = 0, sum;
    
    int i = a.size() - 1, j = b.size() - 1;
    
    while (i >= 0 || j >= 0 || carry) {
        sum = carry;
        if (i >= 0) sum += a[i--] - '0'; // 轉換成數字加總
        if (j >= 0) sum += b[j--] - '0';
        
        carry = sum / 10; // 進位
        res = char(sum % 10 + '0') + res; // 取個位數，插入結果
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
