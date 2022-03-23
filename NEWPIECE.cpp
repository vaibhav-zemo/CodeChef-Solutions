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

        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int first = x1 + y1;
        int second = x2 + y2;
        if (x1==x2 && y1==y2)
        {
            cout << 0 << endl;
        }
        else if ((first % 2 == 0 && second % 2 == 0) || (first % 2 != 0 && second % 2 != 0))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}