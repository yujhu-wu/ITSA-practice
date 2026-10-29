#include <iostream>
#include <string>
#include <algorithm> // 提供 reverse() 函式
using namespace std;

int main() {
    string input;
    while(cin >> input) {
        int len = input.length();
        int half = len / 2;
        
        // 取左半部子字串
        string left = input.substr(0, half);
        
        // 根據字串長度奇偶，取右半部
        string right;
        if(len % 2 == 0) {
            right = input.substr(half, half);
        } 
        else {
            right = input.substr(half + 1, half); // 略過中間字元
        }
        // 將右半部反轉
        reverse(right.begin(), right.end());

        // 比較左右兩部是否相同
        if(left == right)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
