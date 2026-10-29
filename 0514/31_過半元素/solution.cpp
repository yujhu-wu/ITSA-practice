#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        // 使用 istringstream 將每行字串轉換為串流
        istringstream iss(line);
        map<int, int> freq;
        //左邊的 int 是「鍵（key）」── 也就是某個數字。
        //右邊的 int 是「值（value）」── 這個數字出現了幾次。
        int num;
        int N = 0;// 計算每個數字的出現頻率，後面要/2來看有沒有過半
        while (iss >> num) {
            freq[num]++;
            N++;
        }
        bool found = false;
        for (auto it = freq.begin(); it != freq.end(); ++it) {
            if (it->second > N / 2) {
                cout << it->first << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "NO" << endl;
        }
    }
    return 0;
}
