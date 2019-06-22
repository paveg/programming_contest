#include <iostream>
#include <vector>
#include <stack>
#include <thread>

using namespace std;
using ll = long long;
const ll inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;
const ll mod = 1e9 + 7;

ll ans = 0;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<thread> threads;
    for (ll i = a; i < b; ++i) {
        threads.emplace_back([i, c, d]() {
            cout << i << endl;
            if (i % c != 0 && i % d != 0) ans++;
        });
    }

    for(auto &t: threads){
        t.join();
    }

    cout << ans << endl;
    return 0;
}
