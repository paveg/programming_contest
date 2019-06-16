#include <iostream>
#include <vector>

#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int l, L = 0, ans = 0;
    rep(i, n) {
        cin >> l;
        L += l;
        if (x >= L) {
            ans++;
        }
    }

    cout << ans + 1 << endl;
    return 0;
}
