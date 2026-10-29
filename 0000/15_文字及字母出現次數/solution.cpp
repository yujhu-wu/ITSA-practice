#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string a;
    char letter[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int counter[26] = {0};
    int number = 1;

    while(getline(cin, a))
    {
        for(int i = 0; i < a.length(); i++)
        {
            char c = a[i];
            c = tolower(c); //轉成小寫
            if(a[i] == ' ')
            {
                number++;
            }
            for(int j = 0; j < 26; j++)
            {
                if(c == letter[j])
                {
                    counter[j] ++;
                }
            }
        }
        cout << number << endl;
        for(int j = 0; j < 26; j++)
        {
            if(counter[j] != 0)
            {
                cout << letter[j] << " : " << counter[j] << endl;
            }
        }
    }
    return 0;
}
