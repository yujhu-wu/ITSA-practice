//最小公倍數LCM(a,b)= ∣a×b∣/ GCD(a,b)
#include <iostream>

using namespace std;

int gcd(int a,int b);
int main()
{
    int n,m;
    int c=0;
    cin>>m>>n;
    if(m>n){
        c=m;
        m=n;
        n=c;
    }
    cout<<(abs(m*n))/gcd(m,n)<<endl;
    return 0;
}

int gcd(int a,int b){
    int f=a%b;
    if(f==0) return b;
    else return gcd(b,f);
}
