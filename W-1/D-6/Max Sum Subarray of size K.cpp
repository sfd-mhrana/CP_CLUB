#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

long maximumSumSubarray(int K, vector<int> &Arr, int N)
{
    long maxSum = 0;
    long currentSum = 0;

    for (int i = 0; i < N; ++i)
    {
        if (i >= K)
            currentSum += Arr[i] - Arr[i - K];
        else
            currentSum += Arr[i];
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Call Function
    return 0;
};