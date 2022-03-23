#include <iostream>
using namespace std;
#define ll long long

bool isfilled(int *arr)
{
    for (int i = 1; i <= 7; i++)
    {
        if (arr[i] == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int *check = new int[8];
        for (int i = 1; i <= 7; i++)
        {
            check[i] = 0;
        }

        int *arr = new int[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            ans++;
            if (arr[i] >= 1 && arr[i] <= 7)
            {
                check[arr[i]]++;
            }
            if (isfilled(check))
            {
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}