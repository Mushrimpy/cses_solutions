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
    cout << n << " ";

    while (n != 1) {
        (n % 2 == 0) ? (n /= 2) : (n = 3 * n + 1);
        cout << n << " ";
    }

    return 0;
}
