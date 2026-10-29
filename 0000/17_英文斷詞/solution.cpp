#include <iostream> 
#include <string> 
#include <sstream> 
#include <vector> 
#include <algorithm> 
 
using namespace std; 
 
int main() 
{ 
    string input, word; 
    vector<string> words; 
 
    while (getline(cin, input)) 
    { 
        words.clear(); 
 
        istringstream iss(input); 
        while (iss >> word) 
        { 
            for (int j = 0; j < word.length(); j++) 
            { 
                word[j] = tolower(word[j]);  
            } 
            if (find(words.begin(), words.end(), word) == words.end()) 
            { 
                words.push_back(word); 
            } 
        } 
 
        for (size_t i = 0; i < words.size(); ++i) 
        { 
            cout << words[i]; 
            if (i < words.size() - 1) 
            { 
                cout << " "; 
            } 
        } 
        cout << endl; 
    } 
    return 0; 
}
