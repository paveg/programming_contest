#include <iostream>
#include <vector>
#include <stack>
#include <thread>

using namespace std;
typedef long long ll;
const ll inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;
const ll mod = 1e9 + 7;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(b, a % b) * b; }

ll f(ll x, ll c, ll d) {
    ll res = x;
    res -= x / c;
    res -= x / d;
    res += x / lcm(c, d);
    return res;
}

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = 0;

    ans = f(b, c, d) - f(a - 1, c, d);
    cout << ans << endl;
    return 0;
}
