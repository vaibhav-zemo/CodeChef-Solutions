#include <bits/stdc++.h>
using namespace std;
#define ll long long

long balance(string st)
{
    long ans = 0;
    long max_ans = 0;
    for (long i = 0; i < st.length(); i++)
    {
        if (st[i] == '(')
        {
            ans++;
        }
        else
        {
            ans--;
        }
        max_ans = max(ans, max_ans);
    }
    return max_ans;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string st;
        cin >> st;

        long n = balance(st);
        for (long i = 0; i < n; i++)
        {
            cout << "(";
        }
        for (long i = 0; i < n; i++)
        {
            cout << ")";
        }
        cout << endl;
    }
    return 0;
}