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

    int n;
    cin >> n;

    if (n != 2 && n != 3) {
        int l = 1, r = n;
        cout << 1 + n / 2;
        while (r - l > 1) {
            cout << " " << l << " " << r;
            l++, r--;
        }
        if (n % 2 == 0) cout << " " << n / 2;
    } else
        cout << "NO SOLUTION";

    return 0;
}
