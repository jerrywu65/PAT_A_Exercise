/*#include <iostream>
#include<cstdio>
#include<algorithm> 
using namespace std;
const int nmax = 1e5 + 1;
const int mmax = 1e4;
int a[nmax];  //a[i]��ʾ���i���ߣ���i����i+1�ľ���
int dis[nmax];//dis[i]��ʾ��1����i�ľ��� 

int main(int argc, char** argv) {
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum += a[i];
		dis[i] = sum;
	}
	int m;
	cin >> m;
	int u, v;
	int dist;
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		if (u > v) {
			swap(u, v);
		}
		int tmp = dis[v - 1] - dis[u - 1];
		int ans = min(tmp, sum - tmp);
		cout << ans << endl;

	}
	return 0;
}*/