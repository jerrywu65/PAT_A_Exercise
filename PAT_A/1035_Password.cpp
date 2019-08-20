/*#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	int index = 0;
	bool flag = false;
	vector<string> res;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		string user, pass;
		cin >> user >> pass;
		flag = false;
		int len = pass.length();
		for (int j = 0; j < len; j++)
		{
			if (pass[j]=='1')
			{
				pass[j] = '@';
				if (flag==false)
				{
					index++;
					flag = true;
				}
			}
			else if (pass[j] == '0')
			{
				pass[j] = '%';
				if (flag == false)
				{
					index++;
					flag = true;
				}
			}
			else if (pass[j] == 'l')
			{
				pass[j] = 'L';
				if (flag == false)
				{
					index++;
					flag = true;
				}
			}
			else if (pass[j] == 'O')
			{
				pass[j] = 'o';
				if (flag == false)
				{
					index++;
					flag = true;
				}
			}
		}
		if (flag==true)
		{
			string tmp = user + " " + pass;
			res.push_back(tmp);
		}
	}
	if (index != 0) {
		cout << index << endl;
		for (int i = 0; i < index; i++) {
			cout << res[i] << endl;
		}
	}
	else if (n == 1) {
		printf("There is 1 account and no account is modified\n");
	}
	else {
		printf("There are %d accounts and no account is modified", n);
	}

	return 0;
}*/