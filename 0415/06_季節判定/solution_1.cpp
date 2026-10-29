#include <iostream>

using namespace std;

int main()
{
    int season;
    while(cin >> season)
    {
        if(season == 3 || season == 4 || season == 5)
        {
            cout << "Spring" << endl;
        }
        else if(season == 6 || season == 7 || season == 8)
        {
            cout << "Summer" << endl;
        }
        else if(season == 9 || season == 10 || season == 11)
        {
            cout << "Autumn" << endl;
        }
        else
        {
            cout << "Winter" << endl;
        }
    }
    return 0;
}
