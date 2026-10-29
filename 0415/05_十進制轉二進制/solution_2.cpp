#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    cout << bitset<8>(static_cast<unsigned char>(num)) << endl;
    
    return 0;
}
