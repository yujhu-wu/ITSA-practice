#include <iostream> 
 
using namespace std; 
 
int main() 
{ 
    int n; 
    cin >> n; 
    int a1, a2, b1, b2; 
    char op; 
 
    while(n--) 
    { 
        cin >> op >> a1 >> a2 >> b1 >> b2; 
        if(op == '+') 
        { 
            cout << a1 + b1 << " " << a2 + b2 << endl; 
        } 
        else if(op == '-') 
        { 
            cout << a1 - b1 << " " << a2 - b2 << endl; 
        } 
        else if(op == '*') 
        { 
            cout << a1 * b1 - a2 * b2 << " " << a2 * b1 + a1 * b2 << endl; 
        } 
        else if(op == '/') 
        { 
            cout << (a1 * b1 + a2 * b2) / (b1 * b1 + b2 * b2) << " " << (a2 * b1 - a1 * b2) / (b1 * b1 + b2 * b2) << endl; 
        } 
    } 
    return 0; 
}
