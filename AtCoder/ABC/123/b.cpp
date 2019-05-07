#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i, N) for (int i = 0; i < N; ++i)

int main() {
    int fans = 1012345678;
    vector<int> menus(5);
    rep(i, 5) cin >> menus[i];
    vector<int> order = {0, 1, 2, 3, 4};

    while (next_permutation(order.begin(), order.end())) {
        int ans = 0;
        rep(i, menus.size()) {
            while (ans % 10 != 0) ans++;
            ans += menus[order[i]];
        }
        fans = min(fans, ans);
    }

    cout << fans << endl;
    return 0;
}
