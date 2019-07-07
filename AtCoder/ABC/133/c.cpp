#include "bits/stdc++.h"

using namespace std;
typedef long long ll;
const ll inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;
const ll mod = 1e9 + 7;
#define REP(i, o, n) for (ll i = o; i < n; i++)
#define rep(i, n) REP(i, 0, n)

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll lcm(ll a, ll b) { return a / gcd(b, a % b) * b; }

void actual() {
    ll l, r, ans;
    cin >> l >> r;
    ll diff = r - l;
    bool flag = diff > 2019;

    ans = 2000000000;
    if (flag) {
        for (ll i = l; i <= l + 2019; i++) {
            for (ll j = r - 2019; j <= r; j++) {
                ans = min(i * j % 2019, ans);
            }
        }
    } else {
        for (ll i = l; i <= r; i++) {
            for (ll j = i + 1; j <= r; j++) {
                ans = min(i * j % 2019, ans);
            }
        }
    }
    cout << ans << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    actual();
    return 0;
}
