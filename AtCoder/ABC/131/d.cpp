#include <iostream>
#include <vector>

using namespace std;
using ll = long long;
const ll inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;
const ll mod = 1e9 + 7;

bool compareByBack(pair<ll, ll> a, pair<ll, ll> b) {
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

int main() {
    ll n, a, b;
    cin >> n;
    vector<pair<ll, ll>> works(n);
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        works[i] = make_pair(a, b);
    }

    sort(works.begin(), works.end(), compareByBack);
    auto ans = "Yes";
    ll sum = 0;
    for (int i = 0; i < works.size(); i++) {
        sum += works[i].first;
        if (sum > works[i].second) {
            ans = "No";
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
