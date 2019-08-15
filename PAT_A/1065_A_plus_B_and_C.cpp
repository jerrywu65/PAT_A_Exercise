/*#include <iostream>
#include <cstdio>
#pragma warning(disable:4996)
using namespace std;
typedef long long ll;
int main() {
	int t;
	cin >> t;
	long long a, b, c;
	bool flag = true;
	for (int i = 0; i < t; i++) {
		scanf("%lld%lld%lld", &a, &b, &c);
		getchar();
		ll sum = a + b;
		if (a>0&&b>0&&sum<0)
		{
			flag = true;
		}
		else if (a<0&&b<0&&sum>=0)
		{
			flag = false;
		}
		else if (sum>c)
		{
			flag = true;
		}
		else
		{
			flag = false;
		}
		if (flag==true)
		{
			printf("Case #%d: true\n", i + 1);
		}
		else
		{
			printf("Case #%d: false\n", i + 1);
		}
	}
	return 0;
}*/