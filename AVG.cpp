#include <iostream>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long n, k, v;
        cin >> n >> k >> v;

        long sum = 0;
        long cpy = n;
        while (cpy--)
        {
            long a;
            cin >> a;

            sum += a;
        }
        long pro = v * (n + k);
        long x = (pro - sum);
        if (x%k == 0 && x > 0)
        {
            cout << x/k << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}