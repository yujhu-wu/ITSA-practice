#include <iostream> 

using namespace std; 

int main() 
{ 
    char c[10]; // 儲存輸入的10個字元（可能是數字或 'X'）
    int cn[10]; // 把每個字元轉成數字（'X' 會變成 10）
    int p1[10] = {0}; // 第一層累加：第 i 格是 cn[0]+...+cn[i]
    int p2[10] = {0}; // 第二層累加：第 i 格是 p1[0]+...+p1[i]

    for(int i = 0; i < 10; i++) 
    { 
        cin >> c[i]; 
        if(c[i] == 'X') 
        { 
            cn[i] = 10;  // 'X' 視為 10 分
        } 
        else 
        { 
            cn[i] = c[i] - '0'; // 字元轉數字：'1'-'0'=1
        } 
    } 

    for(int i = 0; i < 10; i++) 
    { 
        if(i > 0) //第0位另外算
        { 
            p1[i] = p1[i - 1] + cn[i]; // 累加前面的 + 現在的
        } 
        else 
        { 
            p1[i] = cn[i]; // 第0位直接等於cn[0]
        } 
    } 

    for(int j = 0; j < 10; j++) 
    { 
        if(j > 0) //第0位另外算
        { 
            p2[j] = p2[j - 1] + p1[j]; 
        } 
        else 
        { 
            p2[j] = p1[j]; // 第0位直接等於p1[j]
        } 
    } 

    if(p2[9] % 11 == 0) 
    { 
        cout << "YES" << endl; 
    } 
    else 
    { 
        cout << "NO" << endl; 
    } 

    return 0; 
}
