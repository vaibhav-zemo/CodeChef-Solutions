#include <iostream>
#include <math.h>
using namespace std;
#define ll long long
#define m 1000000007

ll exp(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a) % m;
        }
        a = (a * a) % m;
        b = b >> 1;
    }
    return res;
}

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        cout << exp(2, n - 1) << endl;
    }
    return 0;
}