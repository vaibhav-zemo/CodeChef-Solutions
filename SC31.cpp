#include <bits/stdc++.h>
using namespace std;
#define ll long long

string to_bin(long n)
{
    string st = bitset<64>(n).to_string();

     auto it = st.find('1');

    if (it != string::npos)
    {
        return st.substr(it);
    }

    return st;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long n;
        cin >> n;

        long temp = 0;
        while (n--)
        {
            string st;
            cin >> st;

            long num = stoi(st, 0, 2);
            temp ^= num;
        }

        string ans = to_bin(temp);
        long sum = 0;
        for (char c : ans)
        {
            if (c == '1')
            {
                sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}