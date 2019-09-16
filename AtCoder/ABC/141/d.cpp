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
    ll n, m, a, res = 0;
    cin >> n >> m;

    priority_queue<ll> que;
    rep(i, n) {
        cin >> a;
        que.push(a);
    }

    ll q;
    rep(_, m) {
        q = que.top();
        que.pop();
        que.push(q / 2);
    }
    while (!que.empty()) {
        res += que.top();
        que.pop();
    }
    cout << res << endl;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    actual();
    return 0;
}
