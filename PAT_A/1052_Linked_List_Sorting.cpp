#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

const int nmax = 100010;
struct Node
{
	int address, data, next;
	bool flag;
}node[nmax];

bool cmp(Node a, Node b) {
	if (a.flag==false||b.flag==false)
	{
		return a.flag > b.flag;
	}
	else
	{
		return a.data < b.data;
	}
}

int main() {
	int n, begin, address;
	cin >> n >> begin;
	for (int i = 0; i < n; i++)
	{
		cin >> address;
		cin>>node[address].data >> node[address].next;
		node[address].address = address;
	}
	for (int i = 0; i < nmax; i++)
	{
		node[i].flag = false;
	}
	int p,count=0;
	for ( p = begin; p != -1; p=node[p].next)
	{
		node[p].flag = true;
		count++;
	}
	if (count==0)
	{
		printf("0 -1");
	}
	else
	{
		sort(node, node + nmax, cmp);
		printf("%d %05d\n", count, node[0].address);
		for (int i = 0; i < count; i++)
		{
			if (i != count - 1) {
				printf("%05d %d %05d\n", node[i].address, node[i].data, node[i + 1].address);
			}
			else
			{
				printf("%05d %d -1", node[i].address, node[i].data);
			}
		}
	}


	return 0;
}