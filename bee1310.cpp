#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int maxSubArraySum (const vector<int>& vec, int costPerDay)
{
    int sum = 0, best = 0;
    for (int v : vec)
    {
        sum = max(v - costPerDay, v+sum - costPerDay);
        best = max(best, sum);
    }
    return best;
}

int main()
{
    int numDays, costPerDay;
    while (cin >> numDays >> costPerDay)
    {
        vector<int> vec(numDays, 0);

        for (int i = 0; i < numDays; i++)
        {
            cin >> vec[i];
        }

        cout << maxSubArraySum(vec, costPerDay) << "\n";
    }
    return 0;
}