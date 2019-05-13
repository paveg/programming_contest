#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (int i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

int main() {
    ll N, m = 1000000000000001, order = 5;
    cin >> N;

    vector<ll> capacities(order);
    rep(i, order) cin >> capacities[i];
    rep(i, order) m = min(capacities[i], m);

    ll ans = (N / m + (N % m == 0 ? 0 : 1) + order - 1);

    cout << ans << endl;
    return 0;
}
