#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

int main()
{
    string s;
    cin >> s;
    int arr[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        int a = (int)s[i];
        arr[a - SMALL_LETTER_STATING_POINT] = 1;
    }

    bool find = false;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 0)
        {
            cout << (char)(i + SMALL_LETTER_STATING_POINT);
            find = true;
            break;
        }
    }
    if (!find)
    {
        cout << "None";
    }
    return 0;
};