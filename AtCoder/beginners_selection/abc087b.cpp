#include <iostream>

using namespace std;

int main() {
    int a, b, c, x;
    int sum;
    int counter = 0;

    cin >> a >> b >> c;
    cin >> x;

    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            for (int k = 0; k <= c; k++) {
                sum = ((500 * i) + (100 * j) + (50 * k));
                if (x == sum) {
                    counter++;
                }
            }
        }
    }

    cout << counter;
    return 0;
}
