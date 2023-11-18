#include<stack>
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    while (true)
    {
        int N, flag(1), stop;
        cin >> N;
        if (N == 0)
            break;

        vector<int> C(N);
        stack<int> s;
        for (int i = 0; i < N; i++)
            cin >> C[i];

        int i = 0;
      
        while (i<N)
        {
            if (C[i] == flag)
            {
                flag++;
                i++;
            }
            else if (!s.empty() && s.top() == flag)
            {
                s.pop();
                flag++;
            }   
            else
            {
                s.push(C[i]);
                i++;
            }
        }
        while (!s.empty() && s.top() == flag)
        {
            s.pop();
            flag++;
        }
        cout << (s.empty() ? "yes" : "no") << endl;
    }
}
