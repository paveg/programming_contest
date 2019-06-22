#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;
const ll inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;
const ll mod = 1e9 + 7;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), sum(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    sort(a.begin(), a.end(), less<>());
    sort(b.begin(), b.end(), less<>());

    ll s = 0;
    for (int i = 0; i < a.size(); i++) {
        s += a[i];
        sum[i] = s;
    }
    auto ans = "Yes";
    for (int i = 0; i < b.size(); i++) {
        if (sum[i] > b[i]) {
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
