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
    // Resolve the problem.
    ll n, k, q;
    cin >> n >> k >> q;
    vector <ll> ps(n);
    rep(i, ps.size()) {
        ps[i] = k - q;
    }
    cout << ps.size() << endl;
    int w;
    rep(i, q) {
        cin >> w;
        ps[w - 1] += 1;
    }

    rep(i, ps.size()) {
        if (ps[i] > 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    actual();
    return 0;
}
