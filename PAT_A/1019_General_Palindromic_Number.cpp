/*#include <cstdio>
#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

const int nmax = 20;
int res[nmax];
int main() {
	int n, b;
	int index = 0;
	bool flag = true;
	cin >> n >> b;
	while (n!=0)
	{
		res[index] = n % b;
		n = n / b;
		index++;
	}
	for (int i = 0; i < index/2; i++)
	{
		if (res[i] == res[index - 1 - i]) {
			continue;
		}
		else
		{
			flag = false;
			break;
		}
	}
	if (flag==true)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	for (int i = index-1; i >= 0; i--)
	{
		printf("%d", res[i]);
		if (i!=0)
		{
			printf(" ");
		}
	}

	return 0;
}*/