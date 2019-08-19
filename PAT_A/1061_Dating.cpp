/*#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

char week[7][4] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
int main() {
	char s1[65], s2[65], s3[65], s4[65];
	cin >> s1;
	cin >> s2;
	cin >> s3;
	cin >> s4;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int len3 = strlen(s3);
	int len4 = strlen(s4);
	int i;
	for (i = 0; i < min(len1, len2); i++) {
		if (s1[i] == s2[i]) {
			if (s1[i] >= 'A' && s1[i] <= 'G') {
				printf("%s ", week[s1[i] - 'A']);
				break;
			}
		}

	}
	i++;
	for (; i < min(len1, len2); i++) {
		if (s1[i] == s2[i]) {
			if (s1[i] >= '0' && s1[i] <= '9') {
				printf("%02d:", s1[i] - '0');
				break;
			}
			else if (s1[i] >= 'A' && s1[i] <= 'N') {
				printf("%02d:", s1[i] - 'A' + 10);
				break;
			}
		}
	}
	for (int i = 0; i < min(len3, len4); i++) {
		if (s3[i] == s4[i]) {
			if ((s3[i] >= 'A' && s3[i] <= 'Z') || (s3[i] >= 'a' && s3[i] <= 'z')) {
				printf("%02d", i);
				break;
			}
		}

	}
	return 0;
}*/