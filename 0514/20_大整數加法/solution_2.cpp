#include <bits/stdc++.h>
using namespace std;

string bigadd(string a,string b);
int main()
{
    int n;
    cin>>n;
    while(n--){
        string a, b;
        cin>>a>>b;
        cout<<bigadd(a,b)<<endl;
    }
    return 0;
}

string bigadd(string a,string b)
{
    string res =""; //""之間不空格
    int sum, carry=0;
    int i = a.length()-1;
    int j = b.length()-1;

    while(i>=0 || j>=0 || carry){
        sum=carry;
        if(i>=0) sum += a[i--]-'0';
        if(j>=0) sum += b[j--]-'0';
        carry = sum/10;
        res = char(sum%10 +'0') + res;
    }
    return res;
}
