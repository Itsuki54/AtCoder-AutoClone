#include <bits/stdc++.h>
using namespace std;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int ans[1000][1000];

int main()
{
    int n;
    cin >> n;
    int now = 1;
    int nx = 0, ny = 0;
    int dir = 0;
    while (now <= n * n)
    {
        ans[nx][ny] = now;
        now += 1;
        do
        {
            int wx = nx + dx[dir];
            int wy = ny + dy[dir];
            if (wx < 0 || wx >= n || wy < 0 || wy >= n)
            {
                dir = (dir + 1) % 4;
                break;
            }
            if (ans[wx][wy] != 0)
            {
                dir = (dir + 1) % 4;
            }
        } while (0);
        nx += dx[dir];
        ny += dy[dir];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(ans[i][j], ans[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == n / 2 && j == n / 2) 
                cout << "T ";
            else
                cout << ans[i][j] << (j == n - 1 ? '\n' : ' ');
        }
    }
    return 0;
}
