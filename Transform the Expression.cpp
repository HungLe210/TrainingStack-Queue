#include<string>
#include<stack>
#include <iostream>

using namespace std;
int main()
{
	stack<char> st;
	string s;
	int T;
	cin >> T;
	while (T > 0)
	{
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			if ((s[i] >= 97) && (s[i] <= 122))
				cout << s[i];
			else if (s[i] == ')')
			{
				cout << st.top(); 
				st.pop();
			}
			else if(s[i] !='(')
				st.push(s[i]);
		}
		cout << endl;
		T--;
	}
}

