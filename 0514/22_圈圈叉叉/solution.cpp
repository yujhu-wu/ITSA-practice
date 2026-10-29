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
    //檢查每一行和每一列有沒有「三個數字一樣」：
    for(int x = 0; x < 3; x++)
    {
		    //檢查 第 x 欄 是否三個都一樣（直的）
        if(game[0][x] == game[1][x] && game[1][x] == game[2][x])
        {
            cout << "True" << endl;
            win = true;
            break;
        }
        //檢查 第 x 列 是否三個都一樣（橫的）
        else if (game[x][0] == game[x][1] && game[x][1] == game[x][2])
        {
            cout << "True" << endl;
            win = true;
            break;
        }
    }
    //如果橫的直的都沒人贏，檢查對角線：
    //如果都沒有 → win 仍是 false → !win 就會進來
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
