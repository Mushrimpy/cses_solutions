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
    ll y, x;
    cin >> y >> x;
    ll ans;

    if (y > x) {
        if (y & 1)
            ans = (y - 1) * (y - 1) + x;
        else
            ans = (y * y) - x + 1;
    } else {
        if (x & 1)
            ans = (x * x) - y + 1;
        else
            ans = (x - 1) * (x - 1) + y;
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    rep(_, t) solve();

    return 0;
}
