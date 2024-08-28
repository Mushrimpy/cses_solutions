#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef array<int, 2> pii;
typedef vector<ll> vl;
typedef array<ll, 2> pll;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repf(i, a, n) for (int i = (a); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (n) - 1; i >= 0; --i)
#define rrepf(i, a, n) for (int i = (n) - 1; i >= a; --i)
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n;
    cin >> n;
    vl s1, s2;
    if (n % 4 == 0) {
        repf(i, 1, n + 1)(i % 4 == 0 || i % 4 == 1) ? s1.push_back((ll)i) : s2.push_back((ll)i);

    } else if (n % 4 == 3) {
        s1.push_back(1);
        s1.push_back(2);
        s2.push_back(3);
        repf(i, 4, n + 1)(i % 4 == 0 || i % 4 == 3) ? s1.push_back((ll)i) : s2.push_back((ll)i);

    } else {
        cout << "NO";
        return;
    }
    cout << "YES" << "\n";
    cout << s1.size() << "\n";
    for (auto& x : s1) cout << x << " ";
    cout << "\n";
    cout << s2.size() << "\n";
    for (auto& x : s2) cout << x << " ";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
