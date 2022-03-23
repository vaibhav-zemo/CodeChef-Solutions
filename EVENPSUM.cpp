#include <iostream>
using namespace std;
#define ll long long int

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll even_a, odd_a, even_b, odd_b;

        if (a % 2 == 0)
        {
            odd_a = a / 2;
            even_a = a / 2;
        }
        else
        {
            odd_a = a / 2 + 1;
            even_a = a / 2;
        }

        if (b % 2 == 0)
        {
            odd_b = b / 2;
            even_b = b / 2;
        }
        else
        {
            odd_b = b / 2 + 1;
            even_b = b / 2;
        }

        cout << (odd_a * odd_b + even_a * even_b) << endl;
    }
    return 0;
}