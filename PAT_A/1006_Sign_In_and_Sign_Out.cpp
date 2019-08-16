/*#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

const int nmax = 1000;
string id[nmax];
int in_hh[nmax], in_mm[nmax], in_ss[nmax];
int out_hh[nmax], out_mm[nmax], out_ss[nmax];

int main() {
	int m;
	int unlock = 0, lock = 0;
	char tmp;
	cin >> m;
	
	for(int  i = 0; i < m; i++)
	{
		cin >> id[i];
		cin >> in_hh[i] >> tmp >> in_mm[i] >> tmp >> in_ss[i];
		cin >> out_hh[i] >> tmp >> out_mm[i] >> tmp >> out_ss[i];
	}
	
	for (int i = 0; i < m; i++)
	{
		if (in_hh[i]<in_hh[unlock])
		{
			unlock = i;
		}
		else if (in_mm[i]<in_mm[unlock])
		{
			unlock = i;
		}
		else if (in_ss[i]<in_ss[unlock])
		{
			unlock = i;
		}

		if (out_hh[i] > out_hh[lock])
		{
			lock = i;
		}
		else if (out_mm[i]>out_mm[lock])
		{
			lock = i;
		}
		else if (out_ss[i]>out_ss[lock])
		{
			lock = i;
		}
	}

	cout << id[unlock] << " " << id[lock] << endl;

	return 0;
}*/