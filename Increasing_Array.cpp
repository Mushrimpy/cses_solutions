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

    ll n;
    cin >> n;
    vl x(n + 1);
    ll ans = 0;
    repf(i, 1, n + 1) {
        cin >> x[i];
        ans += max((ll)0, x[i - 1] - x[i]);
        x[i] = max(x[i], x[i - 1]);
    }

    cout << ans;

    return 0;
}
