/*#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int n1[3], n2[3],res[3];
int main() {
	char tmp;
	int carry = 0;
	cin >> n1[0] >> tmp >> n1[1] >> tmp >> n1[2];
	cin >> n2[0] >> tmp >> n2[1] >> tmp >> n2[2];
	res[2] = (n1[2] + n2[2]) % 29;
	carry = (n1[2] + n2[2]) / 29;
	
	res[1] = (n1[1] + n2[1] + carry) % 17;
	carry = (n1[1] + n2[1] + carry) / 17;

	res[0] = n1[0] + n2[0] + carry;
	cout << res[0] << "." << res[1] << "." << res[2] << endl;
	return 0;
}*/