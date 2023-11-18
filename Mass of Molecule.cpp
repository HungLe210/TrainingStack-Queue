#include<string>
#include <iostream>
#include<stack>
using namespace std;


int main()
{
    string s;
    stack<int> st;
    int sum(0);
    cin >> s;

    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'C')
            st.push(12);
        else if (s[i] == 'O')
            st.push(16);
        else if (s[i] == 'H')
            st.push(1);
        else if (s[i] == '(')
            st.push(-1);
        else if (s[i] == ')')
        {
            while (st.top() != -1)
            {
                flag += st.top();
                st.pop();
            }
            st.pop();
            st.push(flag);
            flag = 0;
        }
        else
        {   
            flag = (int(s[i])-48) * st.top();
            st.pop();
            st.push(flag);
            flag = 0;
        }
    }
    while (!st.empty())
    {
        if (st.top() != -1)
            sum += st.top();
        st.pop();
    }
    cout << sum;

   
}