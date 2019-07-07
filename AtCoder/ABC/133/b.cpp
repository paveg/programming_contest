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
    ll n, d, ans = 0;
    cin >> n >> d;
    vector <vector<ll>> x(n, vector<ll>(d));

    rep(i, n) rep(j, d) cin >> x[i][j];
    rep(i, n) {
        REP(j, i + 1, n) {
            ll norm = 0;
            rep(k, d) {
                ll diff = abs(x[i][k] - x[j][k]);
                norm += diff * diff;
            }

            bool flag = false;
            for (ll k = 0; k <= norm; k++) if (k * k == norm) flag = true;
            if (flag) ans++;
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
