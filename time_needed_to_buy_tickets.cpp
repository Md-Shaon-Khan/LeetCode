#include <bits/stdc++.h>
#include <vector>
using namespace std;

// class Solution {
// public:
//     int timeRequiredToBuy(vector<int>& tickets, int k) {
//         int totalTime = 0;

//         for (int i = 0; i < tickets.size(); ++i) {
//             if (i <= k) {
//                 totalTime += min(tickets[i], tickets[k]);
//             } else {
//                 totalTime += min(tickets[i], tickets[k] - 1);
//             }
//         }

//         return totalTime;
//     }
// };

class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {

        int time = 0;

        while (tickets[k] > 0)
        {
            for (int i = 0; i < tickets.size(); ++i)
            {
                if (tickets[i] > 0)
                {
                    tickets[i]--;
                    time++;
                }

                
                if (i == k && tickets[k] == 0)
                {
                    return time;
                }
            }
        }

        return time;
    }
};

int main()
{
    vector<int> tickets;
    int x;

    while (cin >> x && x != -1)
    {
        tickets.push_back(x);
    }

    int k;
    cin >> k;

    Solution obj;
    int result = obj.timeRequiredToBuy(tickets, k);

    cout << result << endl;

    return 0;
}
