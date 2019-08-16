/*#include <cstdio>
#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

int main() {
	bool flag_m = false;
	bool flag_f = false;
	char male = 'M';
	char female = 'F';
	char gender;
	string m_name, m_id, f_name, f_id;
	string tmp_name, tmp_id;
	int tmp_grade;
	int m_grade = INT_MAX;
	int f_grade = INT_MIN;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp_name >> gender >> tmp_id >> tmp_grade;
		if (gender==male)
		{
			if (tmp_grade < m_grade) {
				flag_m = true;
				m_grade = tmp_grade;
				m_name = tmp_name;
				m_id = tmp_id;
			}
		}
		else
		{
			if (tmp_grade>f_grade)
			{
				flag_f = true;
				f_grade = tmp_grade;
				f_name = tmp_name;
				f_id = tmp_id;
			}
		}
	}
	
	if (flag_f)
	{
		cout << f_name << " " << f_id << endl;
	}
	else
	{
		cout << "Absent" << endl;
	}
	
	if (flag_m)
	{
		cout << m_name << " " << m_id << endl;
	}
	else
	{
		cout << "Absent" << endl;
	}

	if (flag_f&&flag_m)
	{
		cout << f_grade - m_grade << endl;
	}
	else
	{
		cout << "NA" << endl;
	}

	return 0;
}*/