#include<queue>
#include <iostream>
using namespace std;
 
int main()
{
    queue<int> card;
    
    int n;
    cin >> n;
    while (n != 0)
    {
        queue<int> card;
        for (int i = 0; i < n; i++)
            card.push(i + 1);
        cout << "Discarded cards: ";
        for (int i = 0; i < n-1;i++)
        {
            cout << card.front() << " ";
            card.pop();
            card.push(card.front());            
            card.pop();
            if (card.size() >= 2)
                cout << ", ";            
        }
        cout << "\nRemaining card: "<<card.front()<<endl;
        cin >> n;
    }
    return 0;
}

