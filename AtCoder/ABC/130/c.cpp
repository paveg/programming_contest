#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ll = long long;
const ll inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;
const ll mod = 1e9 + 7;

int main() {
    int w, h, x, y;
    cin >> w >> h >> x >> y;

    double area = double(w) * double(h);
    auto ans = 2 * x == w && 2 * y == h;
    printf("%lf %d\n", area / 2, ans);
    return 0;
}
