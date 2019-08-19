/*#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int a, b;
	int buffer[20];
	char cbuffer[20];
	cin >> a;
	cin >> b;
	int sum = a + b;
	int index = 0;
	if (sum==0)
	{
		printf("%d", sum);
	}
	if (sum<0)
	{
		printf("-");
		sum = 0 - sum;
	}
	while (sum!=0)
	{
		buffer[index++] = sum % 10;
		sum = sum / 10;
	}
	int c_index = 0;
	for (int i = 0; i < index; i++)
	{
		cbuffer[c_index++] = '0' + buffer[i];
		if ((i+1)%3==0&&i!=(index-1))
		{
			cbuffer[c_index++] = ',';
		}
	}
	for (int i = c_index-1; i >= 0; i--)
	{
		printf("%c", cbuffer[i]);
	}
	return 0;
}*/