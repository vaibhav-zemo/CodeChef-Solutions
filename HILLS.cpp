#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        ll n, u, d;
        cin >> n >> u >> d;

        ll ans = 1;
        bool flag = true;
        ll *arr = new ll[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i < n; i++)
        {
            if (((arr[i] - arr[i-1]) >= 0 && (arr[i] - arr[i-1]) <= u))
            {
                ans++;
            }
            else if ((arr[i] - arr[i-1]) < 0 && abs(arr[i] - arr[i-1]) <= d)
            {
                ans++;
            }
            else if ((arr[i] - arr[i-1]) < 0 && abs(arr[i] - arr[i-1]) > d && flag)
            {
                ans++;
                flag = false;
            }
            else
            {
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}