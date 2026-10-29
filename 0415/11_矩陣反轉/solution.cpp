#include<iostream>

using namespace std;

int main()
{
	int r,c;

	while(cin >> r >> c)//輸入陣列大小
	{
        int d[c][r];//產生陣列
        for (int i = 0; i < r; i++) // 讀入次數即列數
        {
            for (int j = 0; j < c; j++) // 字串分割數即行數
            {
                cin >> d[j][i]; // 一一讀入指定的反矩陣座標
            }
        }

        // 輸出反矩陣座標
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < r; j++)
            {
                if (j == r - 1)
                {
                    cout << d[i][j] << endl;
                }
                else
                {
                    cout << d[i][j] << " ";
                }
            }
        }
	}

	return 0;
}
