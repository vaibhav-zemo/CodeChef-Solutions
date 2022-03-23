#include <iostream>
#include <string>
using namespace std;
#define ll long long

string left_shift(string st)
{
    string ans;
    char last = st[st.length() - 1];
    for (int i = st.length() - 1; i >= 1; i--)
    {
        st[i] = st[i - 1];
    }
    st[0] = last;
    ans = st;
    return ans;
}

string right_shift(string st)
{
    string ans;
    char first = st[0];
    for (int i = 0; i < st.length() - 1; i++)
    {
        st[i] = st[i + 1];
    }
    st[st.length() - 1] = first;
    ans = st;
    return ans;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string st;
        cin >> st;

        cout << (left_shift(st) == right_shift(st) ? "YES" : "NO") << endl;
    }
    return 0;
}