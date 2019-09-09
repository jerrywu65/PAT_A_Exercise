/*#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int n, m;
const int maxn = 500;
const int INF = 1000000000;
int d[maxn];
bool vis[maxn] = { false };
int weight[maxn];
int adj[maxn][maxn];
int num[maxn] = { 0 };
int w[maxn] = { 0 };

void dijkstra(int s) {
	fill(d, d + maxn, INF);
	d[s] = 0;
	w[s] = weight[s];
	num[s] = 1;

	for (int i = 0; i < n; i++)
	{
		int u = -1, min = INF;
		for (int j = 0; j < n; j++)
		{
			if (vis[j]==false&&d[j]<min)
			{
				u = j;
				min = d[j];
			}
		}

		if (u==-1)
		{
			return;
		}
		vis[u] = true;
		for (int v = 0; v < n; v++)
		{
			if (vis[v] == false && adj[u][v] != INF) {
				if (d[u]+adj[u][v]<d[v])
				{
					d[v] = d[u] + adj[u][v];
					w[v] = w[u] + weight[v];
					num[v] = num[u];
				}
				else if (d[u] + adj[u][v] == d[v]&& w[v] < w[u] + weight[v])
				{
					w[v] = w[u] + weight[v];
					num[v] += num[u];
				}
				else if (d[u] + adj[u][v] == d[v])
				{
					num[v] += num[u];
				}
			}
		}
	}
}

int main() {
	int start, end;
	fill(adj[0], adj[0] + maxn * maxn, INF);
	cin >> n >> m >> start >> end;
	for (int i = 0; i < n; i++)
	{
		cin >> weight[i];
	}
	
	for (int i = 0; i < m; i++)
	{
		int c1, c2, tmp_w;
		cin >> c1 >> c2 >> tmp_w;
		adj[c1][c2] = adj[c2][c1] = tmp_w;
	}
	dijkstra(start);

	cout << num[end] << " " << w[end] << endl;


	return 0;
}*/