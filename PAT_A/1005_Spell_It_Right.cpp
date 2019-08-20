/*#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

const int nmax = 102;
char num[nmax];
char res[4];
char dic[10][7] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
int main() {
	int sum = 0;
	cin >> num;
	int len = strlen(num);
	if (len==1&&num[0]=='0')
	{
		printf("zero");
	}
	else
	{
		for (int i = 0; i < len; i++)
		{
			sum += num[i] - '0';
		}
		int index = 0;
		while (sum != 0)
		{
			res[index++] = sum % 10;
			sum /= 10;
		}
		for (int i = index - 1; i >= 0; i--)
		{
			printf("%s", dic[res[i]]);
			if (i != 0)
			{
				printf(" ");
			}
		}
	}
	return 0;
}*/