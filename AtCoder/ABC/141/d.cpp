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


float discount(ll x) {
    return (float) x / (float) pow(2, 1);
}

void actual() {
    // Resolve the problem.
    ll n, m, a, res = 0;
    cin >> n >> m;

    vector<float> S(n);
    rep(i, n) {
        cin >> a;
        S[i] = (float) a;
    }

    rep(_, m) {
        sort(S.begin(), S.end(), greater<float>());
        S[0] = discount(S[0]);
    }
    for (const auto &e: S) res += floor(e);
    cout << res << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    actual();
    return 0;
}
