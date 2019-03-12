// kolejka.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int number;
	char sign;
	queue<int> q;

	while (cin >> sign)
	{
		if (sign == '+')
		{
			cin >> number;
			q.push(number);
		}
		else if (sign == '-')
		{
			if (!q.empty())
				q.pop();
			else cout << "ERROR" << endl;
		}
		else cout << "WHATTTTT?" << endl;
	}

	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}

	return 0;
}

