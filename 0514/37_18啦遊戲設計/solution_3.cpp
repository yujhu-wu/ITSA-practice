#include<iostream>
using namespace std;

int main() {
    int x,cnt[6]={0};
    for(int i=0;i<4;i++){
        cin>>x;
        cnt[x-1]++;
    }
    int top[3]={0},idx=2;
    for(int i=0;i<6;i++){
        if(cnt[i]) top[idx--] =(i+1)*10+cnt[i];
    }
    int a=top[2]/10,c=top[2]%10;
    int b=top[1]/10,c1=top[1]%10;
    int d=top[0]/10,c0=top[0]%10;

    if(c==4){
        cout << "WIN" << endl;
    }
    else if (c == 3) {
        cout << "R" << endl;
    }
    else if (c == 2) {
       if(c1 == 2)
            cout <<b * 2<< endl;
        else
            cout << b + d << endl;  // 一對 + 一顆
    }
    else if (c == 1) {
            
        if (c1 == 3)
            cout << "R" << endl;
        else if (c1 == 2)
            cout << a + d << endl;
        else {
            if (c0 == 2)
                cout << a + b << endl;
            else
                cout << "R" << endl;
        }
    }
    return 0;
}
