/*#include <cstdio>
#include <iostream>
using namespace std;

const int nmax = 100010;
struct Node
{
	char data;
	int next;
	bool flag;
}node[nmax];
int main() {
	for (int i = 0; i < nmax; i++)
	{
		node[i].flag = false;
	}
	int s1, s2, n;
	//scanf_s("%d %d %d", &s1, &s2, &n);
	cin >> s1 >> s2 >> n;
	int address, next;
	char data;
	for (int i = 0; i < n; i++)
	{
		//scanf_s("%d %c %d", &address, &data, &next);
		cin >> address >> data >> next;
		node[address].data = data;
		node[address].next = next;
	}
	int p;
	for ( p = s1; p != -1; p=node[p].next)
	{
		node[p].flag = true;
	}
	for ( p = s2; p != -1; p=node[p].next)
	{
		if (node[p].flag == true) {
			break;
		}
	}
	if (p!=-1)
	{
		printf("%05d", p);
	}
	else
	{
		printf("-1");
	}
	return 0;
}*/