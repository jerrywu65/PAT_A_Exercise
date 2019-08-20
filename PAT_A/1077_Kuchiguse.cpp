/*#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	getchar();
	string ans;
	for (int i = 0; i < n; i++)
	{
		string s;
		getline(cin, s);
		reverse(s.begin(), s.end());
		if (i==0)
		{
			ans = s;
			continue;
		}
		else
		{
			int ans_len = ans.length();
			int len = s.length();
			int min_len = min(ans_len, len);
			if (len<ans_len)
			{
				swap(ans, s);
			}
			for (int j = 0; j < min_len; j++)
			{
				if (ans[j] != s[j]) {
					ans = s.substr(0, j);
					break;
				}
			}
		}
	}
	if (ans.length()==0)
	{
		cout << "nai" << endl;
	}
	else
	{
		reverse(ans.begin(), ans.end());
		cout << ans << endl;
	}
	return 0;
}*/