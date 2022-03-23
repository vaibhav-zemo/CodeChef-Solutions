#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> list;
        map<int, int> map;
        int i = 1;
        while (i <= n)
        {
            int x;
            cin >> x;

            if (x != i)
            {
                map[x]++;
            }
            else
            {
                list.push_back(i);
            }
            i++;
        }
        int ans = 0;
        int l = list.size();
        for (auto i = map.begin(); i != map.end(); i++)
        {
            if (i->second >= k)
            {
                bool flag = true;
                for (int j = 0; j < l; j++)
                {
                    if (list[j] == i->first)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
        ;
    }
    return 0;
}