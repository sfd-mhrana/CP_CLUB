#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    string n;
    cin >> n;

    // One
    //cout << setw(4) << setfill('0') << n << endl;

    stringstream ss;
    ss << n;
    string str = ss.str();
    str.insert(0, 4 - str.length(), '0');

    cout << str;

    return 0;
};