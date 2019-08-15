/*#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

const int nmax = 1001;
double a[nmax], b[nmax], res[nmax];
int idxa[nmax], idxb[nmax],idxres[nmax];

int main() {
	int k1,k2,exp;
	double coe;
	memset(a, 0.0, sizeof(a));
	memset(b, 0.0, sizeof(b));
	memset(res, 0.0, sizeof(res));
	cin >> k1;
	for (int i = 0; i < k1; i++)
	{
		cin >> exp >> coe;
		a[exp] = coe;
		idxa[i] = exp;
	}
	cin >> k2;
	for (int i = 0; i < k2; i++)
	{
		cin >> exp >> coe;
		b[exp] = coe;
		idxb[i] = exp;
	}
	for (int i = 0; i < k1; i++) {
		for (int j = 0; j < k2; j++)
		{
			int new_exp = idxa[i] + idxb[j];
			double new_coe = a[idxa[i]] * b[idxb[j]];
			res[new_exp] += new_coe;
		}
	}
	int k = 0;
	for (int i = 0; i < nmax; i++)
	{
		if (res[i]!=0)
		{
			idxres[k] = i;
			k += 1;
		}
	}
	printf("%d ", k);
	for (int i = k-1; i >=0 ; i--)
	{
		printf("%d %.1lf", idxres[i], res[idxres[i]]);
		if (i!=0)
		{
			printf(" ");
		}
	}


	return 0;
}*/