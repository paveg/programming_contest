#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    int x = 0;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++) {
        int num = i, sum = 0, dig;
        while (num) {
            dig = num % 10;
            sum = sum + dig;
            num /= 10;
        }
        if (a <= sum && sum <= b) {
            x += i;
        }
    }

    cout << x;
    return 0;
}
