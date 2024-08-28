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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m, k;
    cin >> n >> m >> k;
    vi a(n), b(m);

    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    sort(all(a));
    sort(all(b));

    ll i = 0, j = 0, ans = 0;
    while (i < n && j < m) {
        if (abs(a[i] - b[j]) <= k)
            i++, j++, ans++;
        else if (a[i] < b[j])
            i++;
        else
            j++;
    }
    cout << ans;

    return 0;
}
