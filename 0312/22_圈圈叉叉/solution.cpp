#include <iostream>

using namespace std;

int main()
{
    int game[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> game[i][j];
        }
    }
    bool win = false;
    for(int x = 0; x < 3; x++)
    {
        if(game[0][x] == game[1][x] && game[1][x] == game[2][x])
        {
            cout << "True" << endl;
            win = true;
            break;
        }
        else if (game[x][0] == game[x][1] && game[x][1] == game[x][2])
        {
            cout << "True" << endl;
            win = true;
            break;
        }
    }
    if(!win)
    {
        if(game[0][0] == game[1][1] && game[1][1] == game[2][2])
        {
            cout << "True" << endl;
            win = true;
        }
        else if(game[0][2] == game[1][1] && game[1][1] == game[2][0])
        {
            cout << "True" << endl;
            win = true;
        }
        else
        {
            cout << "False" << endl;
        }
    }
    return 0;
}
