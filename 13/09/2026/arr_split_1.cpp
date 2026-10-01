#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    vector<int> a;
    int x;
    while (ss >> x) {
        a.push_back(x);
    }

    cout << a.size() << nl;

    for (auto &x : a)
        cout << x << ' ';

    cout << nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}