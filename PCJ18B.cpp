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
        int n;
        cin >> n;

        int sum = n*n;
        for (int i = 3; i <= n; i+=2)
        {
            sum += (n-i+1)*(n-i+1);
        }
        cout<<sum<<endl;
    }
    return 0;
}