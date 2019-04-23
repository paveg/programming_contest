#include <iostream>

using namespace std;

int Amount(int x, int y, int z) {
    return (10000 * x) + (5000 * y) + (1000 * z);
}

int main() {
    int n, yen;
    cin >> n >> yen;

    int x10 = -1, x5 = -1, x1 = -1;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n - i; j++) {
            if (yen == Amount(i, j, (n - i - j))) {
                x10 = i, x5 = j, x1 = (n - i - j);
            }
        }
    }

    cout << x10 << " " << x5 << " " << x1 << endl;
    return 0;
}
