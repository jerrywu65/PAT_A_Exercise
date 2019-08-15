/*#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

const int nmax = 1001;
double res[nmax];
double first[nmax];
int idx[nmax];
int main() {
	int k;
	int exp;
	double coe;
	memset(res, 0.0, sizeof(res));
	memset(first, 0.0, sizeof(first));
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> exp >> coe;
		first[exp] = coe;
	}
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> exp >> coe;
		res[exp] = coe;
	}
	k = 0;
	for (int i=nmax-1;i>=0;i--)
	{
		if (first[i]!=0 || res[i]!=0)
		{
			res[i] += first[i];
			idx[k] = i;
			k += 1;
		}
	}
	for (int i = 0; i < k; i++) {
		if (i==0)
		{
			printf("%d ", k);
		}
		printf("%d %.1lf", idx[i], res[idx[i]]);
		if (i!=k-1)
		{
			printf(" ");
		}
	}
	return 0;
}*/