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
