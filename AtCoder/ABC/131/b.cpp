#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
using ll = long long;
const ll inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;
const ll mod = 1e9 + 7;

int main() {
    int n, l, ans = 0, mins = 1000001, selected = 0;
    cin >> n >> l;
    vector<int> apple(n);
    for (int i = 0; i < n; i++) {
        apple[i] = (l + i + 1 - 1);
        ans += apple[i];
    }
    for (const auto &a : apple) {
        if (mins > abs(a)) {
            mins = abs(a);
            selected = a;
        }
    }

    cout << (ans - selected) << endl;
    return 0;
}

