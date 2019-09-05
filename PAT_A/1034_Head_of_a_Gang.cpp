/*#include <iostream>
#include <string>
#include <map>
using namespace std;
const int maxn = 2010;
const int INF = 1000000000;

map<int, string> inttostring;
map<string, int> stringtoint;
map<string, int> gang;

int adj[maxn][maxn] = { 0 }, weight[maxn] = { 0 };
int n, k, numperson = 0;
bool visit[maxn] = { false };

int change(string str) {
	if (stringtoint.find(str)!=stringtoint.end())
	{
		return stringtoint[str];
	}
	else
	{
		stringtoint[str] = numperson;
		inttostring[numperson] = str;
		return numperson++;
	}
}

void dfs(int nowvisit, int &nummember, int &head, int &totalvalue) {
	nummember++;
	visit[nowvisit] = true;
	if (weight[nowvisit]>weight[head])
	{
		head = nowvisit;
	}
	for (int i = 0; i < numperson; i++)
	{
		if (adj[nowvisit][i]>0)
		{
			totalvalue += adj[nowvisit][i];
			adj[nowvisit][i] = adj[i][nowvisit] = 0;
			if (visit[i] == false)
			{
				dfs(i, nummember, head, totalvalue);
			}
		}
	}
}

void dfstravel() {
	for (int i = 0; i < numperson; i++)
	{
		if (visit[i] == false) {
			int head = i, nummember = 0, totalvalue = 0;
			dfs(i, nummember,head, totalvalue);
			if (nummember>2 && totalvalue>k)
			{
				gang[inttostring[head]] = nummember;
			}
		}
	}
}

int main() {
	int w;
	cin >> n >> k;
	string str1, str2;
	for (int i = 0; i < n; i++)
	{
		cin >> str1 >> str2 >> w;
		int id1 = change(str1);
		int id2 = change(str2);
		weight[id1] += w;
		weight[id2] += w;
		adj[id1][id2] += w;
		adj[id2][id1] += w;
	}
	dfstravel();
	cout << gang.size() << endl;
	map<string, int>::iterator it;
	for ( it = gang.begin(); it != gang.end(); it++)
	{
		cout << it->first << " " << it->second << endl;
	}
	return 0;
}*/