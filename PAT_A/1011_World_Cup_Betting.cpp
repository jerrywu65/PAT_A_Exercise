/*#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

char ch[3] = { 'W','T','L' };
int c_idx[3];
double max_val[3];
int main() {
	double res = 0.0;
	int max_idx;
	double a, b, c;
	for (int k = 0; k < 3; k++) {
		cin >> a >> b >> c;
		max_val[k] = max(max(a, b),c);
		if (max_val[k]==a)
		{
			c_idx[k] = 0;
		}
		else if (max_val[k] == b) {
			c_idx[k] = 1;
		}
		else
		{
			c_idx[k] = 2;
		}
	}
	res = (max_val[0] * max_val[1] * max_val[2] * 0.65 - 1) * 2;
	printf("%c %c %c %.2lf", ch[c_idx[0]], ch[c_idx[1]], ch[c_idx[2]], res);
	return 0;
}*/