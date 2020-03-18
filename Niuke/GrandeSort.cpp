#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

struct Student
{
	string name;
	int grade;
};

bool compareDesc(Student a, Student b)
{
	return a.grade > b.grade;
}
bool compareAsc(Student a, Student b)
{
	return a.grade < b.grade;
}


int main()
{
	int n, order;
	vector<Student> stu;
	while (cin >> n)
	{
		cin >> order;
		stu.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> stu[i].name >> stu[i].grade;
		}
		if (order == 0)
			stable_sort(stu.begin(), stu.end(), compareDesc);
		else
			stable_sort(stu.begin(), stu.end(), compareAsc);
		for (int i = 0; i < n; i++)
		{
			cout << stu[i].name << " " << stu[i].grade << endl;
		}
		stu.clear();
	}
	return 0;
}