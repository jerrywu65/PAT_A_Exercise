/*#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int maxn = 110;
struct node
{
	int weight;
	vector<int> child;
}Node[maxn];
bool cmp(int a, int b) {
	return Node[a].weight > Node[b].weight;
}
int path[maxn];
int n, m, s;
void dfs(int index, int numnode, int sum) {
	if (sum>s)
	{
		return;
	}
	if (sum==s)
	{
		if (Node[index].child.size()!=0) {
			return;
		}
		else
		{
			for (int i = 0; i < numnode; i++)
			{
				printf("%d", Node[path[i]].weight);
				if (i<numnode-1)
				{
					printf(" ");
				}
				else
				{
					printf("\n");
				}
			}
		}
	}
	for (int i = 0; i < Node[index].child.size(); i++)
	{
		int child = Node[index].child[i];
		path[numnode] = child;
		dfs(child, numnode+1, sum + Node[child].weight);
	}
}
int main() {
	cin >> n >> m >> s;
	for (int i = 0; i < n; i++)
	{
		cin >> Node[i].weight;
	}
	int id, k, child;
	for (int i = 0; i < m; i++)
	{
		cin >> id >> k;
		for (int j = 0; j < k; j++)
		{
			cin >> child;
			Node[id].child.push_back(child);
		}
		sort(Node[id].child.begin(), Node[id].child.end(), cmp);
	}
	path[0] = 0;
	dfs(0, 1, Node[0].weight);


	return 0;
}*/