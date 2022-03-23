#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<char, int> m;
        while (n--)
        {
            string st;
            cin >> st;

            for (int i = 0; i < st.length(); i++)
            {
                m[st[i]]++;
            }
        }
        m['c'] /=2;
        m['e'] /=2;
        string c = "codehf";
        long min_c = INT_MAX;
        for (int i = 0; i < c.length(); i++)
        {
            long ab = m[c[i]];
            min_c = min(ab, min_c);
        }

        cout<<min_c<<endl;
    }
    return 0;
}