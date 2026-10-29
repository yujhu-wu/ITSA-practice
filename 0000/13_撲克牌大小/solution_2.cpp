#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int suitvalue(char suit)
{
    if(suit == 'S') return 4;
    if(suit == 'H') return 3;
    if(suit == 'D') return 2;
    return 1;
}
int cardvalue(string card)
{
    char suit = card[0];
    int number = stoi(card.substr(1));
    return suitvalue(suit) * 100 + number;
}
bool compare(string a, string b)
{
    return cardvalue(a) > cardvalue(b);
}

int main() 
{
    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);
        string cards[50];
        int j = 0;
        while(ss >> cards[j])
        {
            j++;
        }
        sort(cards, cards + j, compare);
        for (int k = 0; k < j; ++k) 
        {
            cout << cards[k];
            if (k < j - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
