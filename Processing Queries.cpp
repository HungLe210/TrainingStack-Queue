#include<queue>
#include <iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> t, d;
	int n, b,state(0),time(0),complete(0); //state : 0 - free / 1 - busy
	cin >> n >> b;

	queue<int> q;

	for (int i = 0; i < n; i++)
		cin >> t[i] >> d[i];
	for (int i = 0; i < n; i++)
	{
		if (time < t[i])
		{
			if (complete<t[i])
			{	
				complete = time + d[i];
				cout << complete << " ";
				continue;
			}
			else
			{
				if (q.empty() || (q.size()<b))
				{
					q.push(d[i]);
					cout << complete + d[i] << " ";
				}
			}
			
		}
	}



}

