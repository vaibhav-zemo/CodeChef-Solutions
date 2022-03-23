#include <iostream>
#include <map>
#include <string>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string st;
        cin >> st;

        ll one = 0, zero = 0;
        map<char, ll> map;
        for (int i = 0; i < st.length(); i++)
        {
            map[st[i]]++;
        }

        if (st.size() == 1)
        {
            cout << "Yes" << endl;
        }
        else if ((map['1'] == 1 && map['0'] >= 1) || (map['0'] == 1 && map['1'] >= 1))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}