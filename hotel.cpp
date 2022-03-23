#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
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
        vector<pair<int, int>> time;
        int *arive = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arive[i];
            time.push_back(make_pair(arive[i], 1));
        }

        int *depr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> depr[i];
            time.push_back(make_pair(depr[i], 0));
        }
        sort(time.begin(), time.end());
        int cnt = 0, ans = 0;
        for (auto it : time)
        {
            if (it.second == 1)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
            ans = max(ans, cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}