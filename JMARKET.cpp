#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{

    long t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int *arr = new int[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 3);

        ll sum = arr[0] + arr[1];
        ll left = n - 2;
        sum += left * arr[0];
        cout << sum << endl;
    }
    return 0;
}