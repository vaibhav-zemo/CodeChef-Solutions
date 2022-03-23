#include <iostream>
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

        ll ans = 8 + n;
        while (n)
        {
            int a;
            cin >> a;

            if (a % 7 == 0 || (a + 1) % 7 == 0)
            {
                ans--;
            }
            n--;
        }

        cout << ans << endl;
    }
    return 0;
}