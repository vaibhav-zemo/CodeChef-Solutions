#include <iostream>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;

        double car1 = (float)y1 / (float)x1;
        double car2 = (float)y2 / (float)x2;

        if (car2 < car1)
        {
            cout << 1 << endl;
        }
        else if (car2 > car1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 0<<endl;
        }
    }
    return 0;
}