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

        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] > 1)
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}