#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for (int(i) = 0; (i) < (n); ++(i))
#define REPR(i, n) for (int(i) = (n); (i) >= 0; --(i))
#define FOR(i, n, m) for (int(i) = (n); (i) < (m); ++(i))
template <class T>
bool chmax(T &a, const T &b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
bool chmin(T &a, const T &b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}

int main()
{
    int a, b, c;
    string s;
    cin >> a;
    cin >> b >> c;
    cin >> s;
    cout << a + b + c << ' ' << s << endl;
    return 0;
}