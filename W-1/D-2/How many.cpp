#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= a - i; j++)
        {
            for (int k = 0; k <= a - i - j; k++)
            {
                if (i * j * k <= b)
                    count++;
            }
        }
    }
    cout << count << endl;

    return 0;
};