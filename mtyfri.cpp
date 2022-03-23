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
        int n, l;
        cin >> n >> l;

        int *arr1 = new int[n];
        int sum1 = 0, sum2 = 0;
        int *arr2 = new int[n];
        int j = 0, k = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (i % 2 == 0)
            {
                arr1[j++] = a;
                sum1 += a;
            }
            else
            {
                arr2[k++] = a;
                sum2 += a;
            }
        }

        if (sum2 > sum1)
        {
            cout << "YES" << endl;
            break;
        }
        else if (l == 0)
        {
            cout << "NO" << endl;
            break;
        }

        sort(arr1, arr1 + j);
        sort(arr2, arr2 + k);

        int m = j - 1, o = 0;
        while (m >= 0 && o < k && l--)
        {
            int max = arr1[m];
            int min = arr2[o];

            if (max < min)
            {
                continue;
            }

            sum1 = sum1 - max + min;
            sum2 = sum2 - min + max;

            if (sum2 > sum1)
            {
                cout << "YES" << endl;
                break;
            }
            m--, o++;
        }

        if (sum1 > sum2)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}