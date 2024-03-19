#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

bool isMatch(int arr[], int arr2[])
{
    bool isOK = true;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != arr2[i])
        {
            isOK = false;
            break;
        }
    }
    return isOK;
}

int search(string pat, string txt)
{
    int parF[26] = {0};
    int k = pat.size();
    for (int i = 0; i < k; i++)
        parF[(int)pat[i] - SMALL_LETTER_STATING_POINT]++;

    string currentSum = "";
    int count = 0;
    int parT[26] = {0};
    for (int i = 0; i < k; i++)
        parT[(int)txt[i] - SMALL_LETTER_STATING_POINT]++;

    if (isMatch(parF, parT))
        count++;

    for (int i = k; i < txt.size(); ++i)
    {
        parT[(int)txt[i - k] - SMALL_LETTER_STATING_POINT]--;
        parT[(int)txt[i] - SMALL_LETTER_STATING_POINT]++;
        if (isMatch(parF, parT))
            count++;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a, b;
    cin >> a >> b;
    int c = search(a, b);
    cout << c << endl;
    return 0;
};