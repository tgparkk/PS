#include<stdio.h>
#pragma warning(disable: 4996)

int N, K;
int map[8][8];
int visit[8][8];

int ans, start;

int dx[] = { -1,0,1,0 };
int dy[] = { 0,-1,0,1 };

typedef struct Info
{
	int x, y;
	int height;
	int usedk;
	int len;
};

void dfs(Info cur)
{
	ans = ans > cur.len ? ans : cur.len;

	for (int d = 0; d < 4; d++)
	{
		Info next = cur;
		next.x = cur.x + dx[d];
		next.y = cur.y + dy[d];
		next.height = map[next.x][next.y];
		if (next.x < 0 || next.x >= N || next.y < 0 || next.y >= N)continue;
		if (visit[next.x][next.y] == 1)continue;
		if (cur.height > next.height)
		{
			visit[next.x][next.y] = 1;
			next.len++;
			dfs(next);
			visit[next.x][next.y] = 0;
		}
		else
		{
			if (next.usedk != 0 && (cur.height > next.height - K))
			{
				next.height = cur.height - 1;
				next.len++;
				next.usedk = 0;
				visit[next.x][next.y] = 1;
				dfs(next);
				visit[next.x][next.y] = 0;

			}
		}
	}
}

int main()
{
	int T;
	scanf("%d", &T);
	for (int t = 1; t <= T; t++)
	{
		scanf("%d ", &N);
		scanf("%d ", &K);
		ans = 0;
		start = 0;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				scanf("%d", &map[i][j]);
				start = start > map[i][j] ? start : map[i][j];
			}
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (start == map[i][j])
				{
					visit[i][j] = 1;
					Info cur = { i,j,map[i][j],1,1 };
					dfs(cur);//step,k,x,y
					visit[i][j] = 0;
				}
			}
		}

		printf("#%d %d\n", t, ans);
	}
}