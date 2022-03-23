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
        string a, b;
        cin >> a >> b;

        string parent = a + b;

        int n;
        cin >> n;

        string child = "";
        while (n--)
        {
            string st;
            cin >> st;

            child += st;
        }

        map<char, int> map1;
        map<char, int> map2;
        for (int i = 0; i < parent.size(); i++)
        {
            map1[parent[i]]++;
        }
        bool flag = true;
        for (int i = 0; i < child.size(); i++)
        {
            map2[child[i]]++;
            if (map2[child[i]] > map1[child[i]])
            {
                flag = false;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}