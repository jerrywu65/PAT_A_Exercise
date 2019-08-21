/*#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
	char id[15];
	int score;
	int location_number;
	int local_rank;
	int final_rank;
}stu[30001];

bool cmp(Student a, Student b) {
	if (a.score!=b.score)
	{
		return a.score > b.score;
	}
	else
	{
		return strcmp(a.id, b.id) < 0;
	}
}

int main() {
	int n, k, num = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		for (int j = 0; j < k; j++)
		{
			cin >> stu[num].id >> stu[num].score;
			stu[num].location_number = i+1;
			num++;
		}
		sort(stu + num - k, stu + num, cmp);
		stu[num - k].local_rank = 1;
		for (int j = num-k+1; j < num; j++)
		{
			if (stu[j].score == stu[j - 1].score) {
				stu[j].local_rank = stu[j - 1].local_rank;
			}
			else
			{
				stu[j].local_rank = j + 1 - (num - k);
			}
		}
	}
	sort(stu, stu + num, cmp);
	stu[0].final_rank = 1;
	for (int i = 1; i < num; i++)
	{
		if (stu[i].score == stu[i - 1].score) {
			stu[i].final_rank = stu[i - 1].final_rank;
		}
		else
		{
			stu[i].final_rank = i + 1;
		}
	}
	cout << num << endl;
	for (int i = 0; i < num; i++)
	{
		cout << stu[i].id << " " << stu[i].final_rank << " " << stu[i].location_number << " " << stu[i].local_rank << endl;
	}

	return 0;
}*/