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
            cout << a1 + b1 << " " << a2 + b2 << endl; //配對+
        } 
        else if(op == '-') 
        { 
            cout << a1 - b1 << " " << a2 - b2 << endl; //配對-
        } 
        else if(op == '*') 
        { 
            cout << a1 * b1 - a2 * b2 << " " << a2 * b1 + a1 * b2 << endl; //配對- 和 交叉+
        } 
        else if(op == '/') 
        { 
            cout << (a1 * b1 + a2 * b2) / (b1 * b1 + b2 * b2) << " " << (a2 * b1 - a1 * b2) / (b1 * b1 + b2 * b2) << endl;//配對+ 和 交叉-，除依樣的b12平方+
        } 
    } 
    return 0; 
}
