#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        string num1, num2;
        cin >> num1 >> num2;

        string result;
        int carry = 0;

        int len1 = num1.length();
        int len2 = num2.length();

        int maxLength = max(len1, len2);

        for (int i = 0; i < maxLength; ++i) {
            int digit1 = (i < len1) ? (num1[len1 - 1 - i] - '0') : 0;
            int digit2 = (i < len2) ? (num2[len2 - 1 - i] - '0') : 0;

            int sum = digit1 + digit2 + carry;

            carry = sum / 10;
            sum %= 10;

            result.push_back('0' + sum);
        }

        if (carry > 0) {
            result.push_back('0' + carry);
        }

        reverse(result.begin(), result.end());

        cout << result << endl;
    }

    return 0;
}
