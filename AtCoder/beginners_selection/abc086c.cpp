#include <iostream>
#include <algorithm>

using namespace std;

int steps(int x, int y, int dx, int dy) {
    return (abs(x - dx) + abs(y - dy));
}

int main() {
    int N;
    cin >> N;

    bool answer = true;
    int t, x, y, dt, dx, dy;
    dt = dx = dy = 0;
    for (int i = 0; i < N; i++) {
        cin >> t >> x >> y;
        if ((t - dt) < steps(x, y, dx, dy)) {
            answer = false;
            break;
        }
        if (((t - dt) >= steps(x, y, dx, dy)) && ((t - dt) - steps(x, y, dx, dy)) % 2 == 1) {
            answer = false;
            break;
        }
        dt = t;
        dx = x;
        dy = y;
    }


    if (answer) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
