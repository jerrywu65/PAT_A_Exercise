/*#include <cstring>
#include <cstdio>
#include <iostream>
#include <climits>
using namespace std;

int main() {
	string str;
	cin >> str;
	int n = str.length();
	int k;
	int nmax = INT_MIN;
	for (int i = 3; i <= n; i++)
	{
		k = (n + 2 - i) / 2;
		if (k<=i&&k>nmax)
		{
			nmax = k;
		}
	}
	int n2 = n + 2 - 2 * nmax;
	for (int i = 0; i < nmax; i++)
	{
		if (i!=nmax-1)
		{
			printf("%c", str[i]);
			for (int j = 0; j < n2 - 2; j++)
			{
				printf(" ");
			}
			printf("%c\n", str[n - 1 - i]);
		}
		else
		{
			for (int j = 0; j < n2; j++)
			{
				printf("%c", str[nmax - 1 + j]);
			}
		}

	}
	
	return 0;
}*/