/*#include <cstdio>
#include <queue>
#include <iostream>
using namespace std;

int m, n, l, t;
bool inq[1290][130][61] = { false };
int matrix[1290][130][61];

struct NODE
{
	int x, y, z;
}node;

int X[6] = { 1,-1,0,0,0,0 };
int Y[6] = { 0,0,1,-1,0,0 };
int Z[6] = { 0,0,0,0,1,-1 };

bool judge(int x, int y, int z) {
	if (x>=m||x<0||y>=n||y<0||z>=l||z<0)
	{
		return false;
	}
	if (matrix[x][y][z]==0||inq[x][y][z]==true)
	{
		return false;
	}
	return true;
}

int BFS(int x, int y, int z) {
	int tot = 0;
	queue<NODE> Q;
	node.x = x;
	node.y = y;
	node.z = z;
	Q.push(node);
	inq[x][y][z] = true;
	while (!Q.empty())
	{
		NODE top = Q.front();
		Q.pop();
		tot++;
		for (int i = 0; i < 6; i++)
		{
			int newX = top.x + X[i];
			int newY = top.y + Y[i];
			int newZ = top.z + Z[i];
			if (judge(newX,newY,newZ))
			{
				node.x = newX;
				node.y = newY;
				node.z = newZ;
				Q.push(node);
				inq[newX][newY][newZ] = true;
			}
		}
	}
	if (tot>=t)
	{
		return tot;
	}
	else
	{
		return 0;
	}
}

int main() {
	cin >> m >> n >> l >> t;
	for (int z = 0; z < l; z++)
	{
		for (int x = 0; x < m; x++)
		{
			for (int y = 0; y < n; y++) {
				cin >> matrix[x][y][z];
			}
		}
	}
	int ans = 0;
	for (int z = 0; z < l; z++)
	{
		for (int x = 0; x < m; x++) 
		{
			for (int y = 0; y < n; y++)
			{
				if (matrix[x][y][z] == 1 && inq[x][y][z] == false) {
					ans += BFS(x, y, z);
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}*/