#include <cstdio>
#include <queue>
#define read freopen("dataN.txt","r",stdin)
#define MP make_pair
using namespace std;

typedef pair<int, int> P;

int d[1010][1010];
int dr[] = {0, 1, 0, -1};
int dc[] = {1, 0, -1, 0};

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int r, c, R, C;
        scanf("%d%d", &R, &C);
        getchar();
        queue<P> fire, q;
        bool ok[1010][1010] = {};
        for (r = 1; r <= R; r++)
        {
            char map[1010];
            gets(map + 1);
            for (c = 1; c <= C; c++)
            {
                d[r][c] = 0;
                if (map[c] == '.') ok[r][c] = 1;
                else if (map[c] == 'F') fire.push(MP(r, c));
                else if (map[c] == 'J')
                {
                    ok[r][c] = 1;
                    q.push(MP(r, c));
                }
            }
        }
        int find = 0, prev = -1;
        while (!q.empty() && !find)
        {
            int i, dis = d[q.front().first][q.front().second];
            if (dis != prev)
            {
                int burn = fire.size();
                while (burn--)
                {
                    r = fire.front().first;
                    c = fire.front().second;
                    fire.pop();
                    for (i = 0; i < 4; i++)
                        if (ok[r + dr[i]][c + dc[i]])
                        {
                            fire.push(MP(r + dr[i], c + dc[i]));
                            ok[r + dr[i]][c + dc[i]] = 0;
                        }
                }
            }
            r = q.front().first;
            c = q.front().second;
            q.pop();
            prev = d[r][c];
            for (i = 0; i < 4; i++)
            {
                if ((r + dr[i]) == (R + 1) || !(r + dr[i]) || (c + dc[i]) == (C + 1) || !(c + dc[i]))
                {
                    printf("%d\n", dis + 1);
                    find = 1;
                    break;
                }
                if (!d[r + dr[i]][c + dc[i]] && ok[r + dr[i]][c + dc[i]])
                {
                    d[r + dr[i]][c + dc[i]] = dis + 1;
                    q.push(MP(r + dr[i], c + dc[i]));
                }
            }
        }
        if (!find) puts("IMPOSSIBLE");
    }
    return 0;
}
