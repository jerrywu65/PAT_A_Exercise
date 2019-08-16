/*#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

char radix[13] = { '0','1','2','3','4','5','6','7','8','9','A','B','C' };
int n[3];
int main() {
	int base = 13;
	cin >> n[0] >> n[1] >> n[2];
	printf("#");
	for (int i = 0; i < 3; i++)
	{
		printf("%c%c", radix[n[i] / base], radix[n[i] % base]);
	}
	return 0;
}*/