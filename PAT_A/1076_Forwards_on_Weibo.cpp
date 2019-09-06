/*#include <iostream>
#include <queue>
#include <cstdio>
#include <vector>
using namespace std;

struct node
{
	int v;
	int layer;
};

const int maxn = 1010;
vector<node> adj[maxn];
bool visit[maxn] = { false };

void bfs(int s, int & numfollowers, int k) {
	queue<node> q;
	node start;
	start.v = s;
	start.layer = 0;
	q.push(start);
	visit[s] = true;
	while (!q.empty())
	{
		node topnode = q.front();
		q.pop();
		int u = topnode.v;
		for (int i = 0; i < adj[u].size(); i++)
		{
			node next = adj[u][i];
			next.layer = topnode.layer + 1;
			if (visit[next.v] == false&&next.layer<=k)
			{
				q.push(next);
				numfollowers++;
				visit[next.v] = true;
			}
		}
	}
}
int bfstravel(int s, int k) {
	int numfollowers = 0;
	bfs(s, numfollowers, k);
	
	return numfollowers;
}

int main() {
	int n, k, numfollow, idfollow;
	cin >> n >> k;
	node user;
	for (int i = 1; i <= n; i++)
	{
		user.v = i;
		cin >> numfollow;
		for (int j = 0; j < numfollow; j++)
		{
			cin >> idfollow;
			adj[idfollow].push_back(user);
		}
	}

	int numquery, s;
	cin >> numquery;
	for (int i = 0; i < numquery; i++)
	{
		cin >> s;
		memset(visit, false, sizeof(visit));
		int numfollowers = bfstravel(s, k);
		cout << numfollowers << endl;
	}
	return 0;
}*/