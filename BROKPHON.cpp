#include <iostream>
#include <map>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll sum = 0;
        map<ll, ll> m;
        ll *arr = new ll[n];
        cin >> arr[0];
        for (ll i = 1; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] != arr[i - 1])
            {
                m[i]++;
                m[i - 1]++;
            }
        }

        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second >= 1)
            {
                sum++;
            }
        }

        cout << sum << endl;
    }
    return 0;
}