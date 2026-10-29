#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input,word;
    vector<string> wd;

    while (getline(cin, input)){
        wd.clear();
        istringstream iss(input);

        while(iss>>word){
            for(int j=0;j<word.length();j++){
                word[j]=tolower(word[j]);
            }
            if(find(wd.begin(),wd.end(),word)==wd.end()){
                wd.push_back(word);
            }
        }

        for(size_t i=0;i<wd.size();i++){
            cout<<wd[i];
            if (i < wd.size() - 1){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
