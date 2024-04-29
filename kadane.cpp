#include <bits/stdc++.h>

using namespace std;

#define LOOP(i,a,b) for (int i = a; i < b; i++)

int main()
{
    vector<int> vec {18, 35, 6, 80, 15, 21};

    int sum = 0, best = 0;
    LOOP(i, 0, vec.size())
    {
        sum = max(vec[i] - 20, vec[i]+sum - 20);
        best = max(best, sum);
    }
    cout << best << "\n";

    return 0;
}